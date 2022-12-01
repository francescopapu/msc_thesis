TARGET=jq
all: 
	make -C src

clean:
	rm -rf lava-install
	make -C src clean

install: all
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp src/$(TARGET) lava-install/bin/
