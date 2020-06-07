all: main.o 
	g++ bin/*.o -o bin/test.exe -I include -lfreeGLUT -l openGL32
	@echo

main.o: src/main.cpp
	g++ src/main.cpp -c -o bin/main.o -I include -lfreeGLUT -l openGL32

clean:
	rm bin/*

new:
	mkdir bin

test: all
	bin/test.exe
