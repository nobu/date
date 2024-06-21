#!ruby -p

BEGIN {
  if ARGV.first == '-o'
    ARGV.shift
    STDOUT.reopen($output = ARGV.shift, "w")
  end
  lines = 2
}
END {
  File.unlink($output) if $! and $output and File.exist?($output)
}

if (~/^\w*hash/)...(~/^}/)
  $_.sub!(/ (?:hval =|return) \K/, '(unsigned int)')
end
if ~/^struct \w+;$/...~/__END__/
  if ~/^()#line/...~// and !defined?($1)
    $_ += "#line #{$<.lineno + lines} #{($output || "-").dump}\n"
    lines += 1
  end
end
