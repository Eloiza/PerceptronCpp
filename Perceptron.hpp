#include <array>
#include <cstdlib>
#include <iostream>
#include <bitset>

#define INPUT_SIZE 5
#define WEIGHT_SIZE INPUT_SIZE + 1

//best history lenght between 12 to 62
#define HISTORY_LENGHT 16  //number of entries in bht to consider

class Perceptron{
    private:
        std::array<int, WEIGHT_SIZE> weights = {1};
        double threshold = {1.93*HISTORY_LENGHT + 14};

        bool sameSign(short x, short y);
    public:        
        void fit(short x, short int y, short int label);
        short int predict(short x);
        
        std::array<int, WEIGHT_SIZE> getWeights();
        void printWeights();
};