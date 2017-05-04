
CPP  = g++
CXXFLAGS = -Wall -pedantic


sachy: main.o board.o unit.o pos.o move.o
	$(CPP) main.o board.o unit.o pos.o move.o -o "sachy"

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

board.o: board.cpp
	$(CPP) -c board.cpp -o board.o $(CXXFLAGS)

unit.o: unit.cpp
	$(CPP) -c unit.cpp -o unit.o $(CXXFLAGS)

pos.o: pos.cpp
	$(CPP) -c pos.cpp -o pos.o $(CXXFLAGS)

move.o: move.cpp
	$(CPP) -c move.cpp -o move.o $(CXXFLAGS)
