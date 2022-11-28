#include "Perceptron.hpp"
#include "btb_cell.hpp"
#include <array>
#include <iostream>
#include <bitset>

#define BTB_ROW 1024
#define BTB_COL 4

//hash the branch address 
//fetch the perceptron
//calculate y -> make a prediction 
// resolve the branch and check the result
// if different train 

//best threhsold 

int main(){
    Perceptron p = Perceptron();
    p.fit({8}, -1, -1);
    p.fit({12}, 1, -1);

    p.printWeights();
    return 0;
}