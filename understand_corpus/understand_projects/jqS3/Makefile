TARGET=jq
all: 
	make -C src

clean:
	rm -rf lava-install
	make -C src clean

install: all
	rm -rf lava-install
	mkdir -p lava-install/bin lava-install/share
	cp src/$(TARGET) lava-install/bin/
	cp fixed.json lava-install/share/

