all:
	$(MAKE) -C src

clean:
	$(MAKE) -C src -f makefile $@;