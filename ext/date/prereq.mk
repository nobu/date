.SUFFIXES: .list

RUBY = ruby

.list.h:
	$(RUBY) $(top_srcdir)/tool/gperf.rb -o $(@F) gperf --ignore-case -L ANSI-C -C -c -P -p -j1 -i 1 -g -o -t -N $(*F) $<

zonetab.h: zonetab.list

.PHONY: update-zonetab
update-zonetab:
	$(RUBY) -C $(srcdir) update-abbr

.PHONY: update-nothing
update-nothing:

update = nothing

zonetab.list: update-$(update)
