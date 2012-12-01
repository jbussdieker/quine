all: quine
	./quine > quine.c
clean:
	rm -f quine.o quine
quine: quine.o
	gcc quine.o -o quine
quine.o: quine.c
	gcc -c quine.c
