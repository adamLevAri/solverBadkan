#!make -f

CFLAGS=-stdlib=libc++ -std=c++11

demo:  operatorShift.o Demo.o
	g++ $(CFLAGS) $^ -o demo

test:  operatorShift.o badkan.o
	g++ $(CFLAGS) $^ -o test

%.o: %.cpp
	g++ $(CFLAGS) -c $< -o $@
	
Demo.o: Demo.cpp Demo.h

badkan.o: badkan.cpp badkan.h

operatorShift.o: LINE.h POLI.h VAR.h

clean:
	rm -f *.o demo test
