#!ruby -p

BEGIN {
  if ARGV.first == '-o'
    ARGV.shift
    STDOUT.reopen($output = ARGV.shift, "w")
  end
}
END {
  File.unlink($output) if $! and $output and File.exist?($output)
}

if (~/^\w*hash/)...(~/^}/)
  $_.sub!(/ (?:hval =|return) \K/, '(unsigned int)')
end
