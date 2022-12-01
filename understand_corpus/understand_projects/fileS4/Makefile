all: file

file2 :
	make -C src file2

magic.h :
	make -C src magic.h

clean:
	rm -rf lava-install
	make -C src clean

install:
	rm -rf lava-install
	mkdir -p lava-install/share/misc
	mkdir -p lava-install/bin
	cp magic.mgc lava-install/share/misc/
	cp src/file lava-install/bin

