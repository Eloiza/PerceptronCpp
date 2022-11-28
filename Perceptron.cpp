#include "Perceptron.hpp"

/*Check if two integers have the same sign i.e negative and negative*/
bool Perceptron::sameSign(short x, short y){
    return (x >=0) ^ (y< 0);
} 

/*Given an input x update perceptron weights*/
void Perceptron::fit(std::array<int, INPUT_SIZE> x, short int y, short int label){
    unsigned int i; 
    if(!sameSign(y,label) || std::abs(y) < threshold){
        for(i =0; i<INPUT_SIZE; i++){
            this->weights[i] = (this->weights[i + 1] + label) * x[i];
        }
    }
}

short Perceptron::predict(std::array<int, INPUT_SIZE> x){
    short y = this->weights[0]; //add bias    
    for(short i=0; i< INPUT_SIZE; i++){
        y += this->weights[i + 1]*x[i];
    }
    return y;
}

std::array<int, WEIGHT_SIZE> Perceptron::getWeights(){
    return this->weights;
};

void Perceptron::printWeights(){
    for (short i; i < INPUT_SIZE; i++){
        std::cout << this->weights[i] << ",";
    }
    std::cout << std::endl;
}
