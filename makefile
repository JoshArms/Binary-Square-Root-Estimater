CCFLAGS = -Wall -std=c++11

solution.exe: main.o
	g++ $(CCAFLAGS) -o solution.exe main.o

main.o: main.cpp
	g++ $(CCFLAGS) -c main.cpp

clean:
	-rm *.o solution.exe
