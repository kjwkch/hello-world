CC = g++

all: make_object
	$(CC) -o FakeSum main.o fakesum.o

make_object: *.cpp
	$(CC) -c *.cpp

clean:
	rm FakeSum *.o
