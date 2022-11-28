#include "Perceptron.hpp"
#include <array>
#include <iostream>


//hash the branch address 
//fetch the perceptron
//calculate y -> make a prediction 
// resolve the branch and check the result
// if different train 

//best threhsold 

int main(){
    Perceptron p = Perceptron();    
    std::cout << "Vetor de Pesos" << std::endl;
    p.printWeights();


    std::array<int, INPUT_SIZE> x = {1,1,1,1,0};
    short pred = p.predict(x);
    std::cout << pred <<std::endl;
    return 0;
}