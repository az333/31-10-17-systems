all: statfiles.c
	gcc statfiles.c

run: all
	./a.out
	
clear:
	rm *.o
	rm *~
