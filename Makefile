Flags=-Wall #-Wshadow
ProgramName=perceptron.out

all: $(ProgramName)

$(ProgramName): main.o Perceptron.o 
	g++ -o $(ProgramName) main.o Perceptron.o  $(Flags)

main.o: main.cpp
	g++ -c main.cpp $(Flags)

Perceptron.o: Perceptron.hpp Perceptron.cpp
	g++ -c Perceptron.cpp $(Flags)

clean:
	rm -f *.o *.gch $(ProgramName)
