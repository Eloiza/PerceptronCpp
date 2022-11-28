#include "Perceptron.hpp"

/*Given an input x train perceptron weights*/
void Perceptron::fit(std::array<int, INPUT_SIZE> x, short int y, short int label){
    unsigned int i; 
    if(y != label || std::abs(y) < theta){
        // calculate dot product
        for(i =0; i<INPUT_SIZE; i++){
            this->weights[i] = (this->weights[i] + label) * x[i];
        }
    }
}

std::array<int, INPUT_SIZE> Perceptron::getWeights(){
    return this->weights;
};

void Perceptron::printWeights(){
    for (short i; i < INPUT_SIZE; i++){
        std::cout << this->weights[i] << ",";
    }
    std::cout << std::endl;
}
