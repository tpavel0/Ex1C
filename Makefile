all: myMath.h power.c basicMath.c main.c 
	gcc -c myMath.h power.c basicMath.c main.c -o main.o

clean:
	rm -rf *.o *.a *.so
