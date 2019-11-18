mymaths: myMath.h power.c basicMath.c
	 gcc -c myMath.h power.c basicMath.c -o libmyMath.o
 	 ar rcs libmyMath.a libmyMath.o

mymathd: myMath.h power.c basicMath.c
	 gcc -fPIC -c myMath.h power.c basicMath.c -o libmyMathd.o
	 gcc - shared -o libmyMath.so libmyMathd.o

mains: main.c libmyMath.a 
	gcc -c main.c libmyMath.a -o mains.o

maind: libmyMath.so main.c 
	gcc -c main.c libmyMath.so -o mains.o

all: myMath.h power.c basicMath.c main.c 
	gcc -c myMath.h power.c basicMath.c main.c -o main.o

clean:
	rm -rf *.o *.a *.so
