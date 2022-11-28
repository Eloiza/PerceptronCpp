#include <array>
#include <cstdlib>
#include <iostream>

#define INPUT_SIZE 5
class Perceptron{
    private:
        std::array<int, INPUT_SIZE> weights;
        short int theta;
    public:
        void fit(std::array<int, INPUT_SIZE> x, short int y, short int label);
        short int predict(std::array<int, INPUT_SIZE> x);
        
        std::array<int, INPUT_SIZE> getWeights();
        void printWeights();
};