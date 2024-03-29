require "rake/testtask"

Rake::TestTask.new(:test) {|t|
  t.libs.replace([:extlibs, *t.libs, "test/lib"])
  t.ruby_opts << "-rhelper"
  t.test_files = FileList['test/**/test_*.rb']
}
task :test => :compile

task compile: "ext/date/zonetab.h"
file "ext/date/zonetab.h" => "ext/date/zonetab.list" do |t|
  dir, hdr = File.split(t.name)
  MAKE["-f", "prereq.mk", "top_srcdir=.."+"/.."*dir.count("/"), hdr,
       chdir: dir]
end

task :default => [:compile, :test]
