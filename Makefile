CC = g++ 
OBJS = read.o horizontal.o


all: imgproc.h imgproc.cpp $(OBJS)
	$(CC) imgproc.cpp -o imgproc $(OBJS)

read.o: imgproc.h read.cpp 
	$(CC) -c read.cpp -o read.o

horizontal.o: imgproc.h horizontal.cpp 
	$(CC) -c horizontal.cpp -o horizontal.o 	
