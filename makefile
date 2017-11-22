all: random
	
random : masocon_random.o
	gcc -o random masocon_random.c

masocon_random: masocon_random.o
	gcc -c masocon_random.c

clean:
	rm -f *.o
