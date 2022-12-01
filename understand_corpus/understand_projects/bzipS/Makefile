all: bzip2

bzip2:
	make -C src

clean:
	rm -rf lava-install
	make -C src clean

install: bzip2
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp src/bzip2 lava-install/bin/

