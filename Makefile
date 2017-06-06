CC=g++
CFLAGS=-c -Wall -std=c++11 -Wextra -pedantic
SFLAGS=-shared
LDFLAGS=-Wall -Llib -Wl,-rpath=$(shell pwd)/lib

all: bin/problem1 bin/problem10

bin/problem1: bin src/lib/Math/Fraction.t.hpp src/lib/Math/IntegerComplex.cpp src/problem1.cpp
	$(CC) $(LDFLAGS) src/lib/Math/IntegerComplex.cpp src/problem1.cpp -o $@

bin/problem10: bin lib obj src/problem10.cpp lib/libGeometry.so
	$(CC) $(LDFLAGS) src/problem10.cpp -lGeometry -o $@

bin:
	mkdir bin
lib:
	mkdir lib
obj:
	mkdir obj

# library shared object
lib/libGeometry.so: obj/Geometry obj/Geometry/AbstractClass.o obj/Geometry/Punct.o obj/Geometry/SegmentOrizontal.o obj/Geometry/SegmentVertical.o
	$(CC) $(SFLAGS) obj/Geometry/AbstractClass.o obj/Geometry/Punct.o obj/Geometry/SegmentOrizontal.o obj/Geometry/SegmentVertical.o -o $@

# objects
obj/Geometry:
	mkdir -p $@
obj/Geometry/AbstractClass.o: src/lib/Geometry/AbstractClass.h src/lib/Geometry/AbstractClass.cpp
	$(CC) $(CFLAGS) -fpic src/lib/Geometry/AbstractClass.cpp -o $@
obj/Geometry/Punct.o: src/lib/Geometry/Punct.h src/lib/Geometry/Punct.cpp
	$(CC) $(CFLAGS) -fpic src/lib/Geometry/Punct.cpp -o $@
obj/Geometry/SegmentOrizontal.o: src/lib/Geometry/SegmentOrizontal.h src/lib/Geometry/SegmentOrizontal.cpp
	$(CC) $(CFLAGS) -fpic src/lib/Geometry/SegmentOrizontal.cpp -o $@
obj/Geometry/SegmentVertical.o: src/lib/Geometry/SegmentVertical.h src/lib/Geometry/SegmentVertical.cpp
	$(CC) $(CFLAGS) -fpic src/lib/Geometry/SegmentVertical.cpp -o $@

clean:
	rm -rf bin obj lib
