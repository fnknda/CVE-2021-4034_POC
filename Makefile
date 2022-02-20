.PHONY: all clean

all: poc lib.so

tar: exp.tgz

clean:
	@rm -f poc lib.so exp.tgz

poc: poc.c
	gcc -o $@ $^

lib.so: lib.c
	gcc -fPIC -shared -o $@ $^

exp.tgz: $(shell find -type f -not -path './.git*')
	tar caf $@ $^
