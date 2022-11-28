#include "Perceptron.hpp"
#include <array>
#include <iostream>

int main(){
    Perceptron p = Perceptron();    
    std::cout << "Vetor de Pesos" << std::endl;
    p.printWeights();


    std::array<int, INPUT_SIZE> x = {1,1,1,1-1};
    return 0;
}