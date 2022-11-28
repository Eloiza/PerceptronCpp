Flags=-Wall #-Wshadow
ProgramName=perceptron.out

all: $(ProgramName)

$(ProgramName): main.o Perceptron.o btb_cell.o
	g++ -o $(ProgramName) main.o Perceptron.o btb_cell.o $(Flags)

main.o: main.cpp
	g++ -c main.cpp $(Flags)

Perceptron.o: Perceptron.hpp Perceptron.cpp
	g++ -c Perceptron.cpp $(Flags)

btb_cell.o: btb_cell.hpp btb_cell.cpp
	g++ -c btb_cell.cpp $(Flags)

clean:
	rm -f *.o *.gch $(ProgramName)
