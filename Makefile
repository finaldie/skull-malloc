all:
	cd src && make

check: all
	cd tests && make $@

valgrind-check: all
	cd tests && make $@

install:
	cd src && make $@

clean:
	cd src && make $@

.PHONY: all check valgrind-check install clean
