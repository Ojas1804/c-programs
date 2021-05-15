ratmat: rational.o rationalApps.o string2Int.o
	gcc -o ratmat rational.o rationalApps.o string2Int.o

rational.o: rational.c rational.h
	gcc -c rational.c

rationalApps.o: rationalApps.c rational.h string2Int.h
	gcc -c rationalApps.c

string2Int.o: string2Int.c rational.h string2Int.h
	gcc -c string2Int.c

clean:
	rm *.o ratmat
