CC = g++ 

OBJS = read.o save.o horizontal.o vertical.o negative.o grayscale.o

all: imgproc.h imgproc.cpp read.o save.o horizontal.o vertical.o negative.o grayscale.o
	g++ imgproc.cpp -o imgproc read.o save.o horizontal.o vertical.o negative.o grayscale.o 

read.o: imgproc.h read.cpp 
	$(CC) -c read.cpp -o read.o

horizontal.o: imgproc.h horizontal.cpp 
	$(CC) -c horizontal.cpp -o horizontal.o 	

save.o: imgproc.h save.cpp
	$(CC) -c save.cpp -o save.o

vertical.o: imgproc.h vertical.cpp
	$(CC) -c vertical.cpp -o vertical.o

negative.o: imgproc.h negative.cpp
	$(CC) -c negative.cpp -o negative.o

grayscale.o: imgproc.h grayscale.cpp
	$(CC) -c grayscale.cpp -o grayscale.o

clean: 
	rm *.o imgproc

tar: 
	tar cf imgproc.tar Makefile imgproc.h imgproc.cpp read.cpp save.cpp horizontal.cpp vertical.cpp negative.cpp grayscale.cpp 
