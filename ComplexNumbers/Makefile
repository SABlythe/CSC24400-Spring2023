mathfun: main.o Complex.o
	g++ -o mathfun main.o Complex.o

main.o: main.cpp Complex.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 main.cpp

Complex.o: Complex.cpp Complex.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 Complex.cpp

clean:
	/bin/rm -f *.o mathfun *.gch
