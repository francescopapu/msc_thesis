.PHONY: all audiofile clean install

all: audiofile

audiofile:
	make -C src

clean:
	rm -rf lava-install
	make -C src clean

install:
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp src/audiofile lava-install/bin

