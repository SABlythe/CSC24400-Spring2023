qsolve: main.o Solver.o
	g++ -o qsolve main.o Solver.o

main.o: main.cpp Solver.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 main.cpp

Solver.o: Solver.cpp Solver.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 Solver.cpp

clean:
	/bin/rm -f *.o qsolve
