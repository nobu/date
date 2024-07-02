#!ruby

def usage
  abort "usage: #$0 [-o output] [-n name] gperf ..."
end

$output = nil
$name = nil
until ARGV.empty?
  case ARGV.first
  when '-o'
    raise "-o given twice" if $output
    ARGV.shift
    STDOUT.reopen($output = ARGV.shift, "w")
  when '-n'
    ARGV.shift
    usage unless $name = ARGV.shift
  when '--'
    ARGV.shift
    break
  when /\A-/
    usage
  else
    break
  end
end
usage if ARGV.empty?
$name = ($name || $output || "-").dump
IO.popen(ARGV) do |gperf|
  lines = 1
  gperf.each do |line|
    if (/^\w*hash/ =~ line)...(/^}/ =~ line)
      line.sub!(/ (?:hval =|return) \K(?=len)/, '(unsigned int)')
    end
    puts line
    lines += 1
    if ((/^struct \w+;$/ =~ line)...false)
      if line.start_with?("#line")..((puts "#line #{lines += 1} #{$name}\n"; true) unless line.start_with?("#line"))
      end
    end
  end
end
