#include "Perceptron.hpp"
#include "btb_cell.hpp"
#include <array>
#include <iostream>

#define BTB_ROW 1024
#define BTB_COL 4

//hash the branch address 
//fetch the perceptron
//calculate y -> make a prediction 
// resolve the branch and check the result
// if different train 

//best threhsold 

int main(){
    std::array<std::array<BtbCell *, BTB_COL>, BTB_ROW> btb_table;

    for (int i = 0; i < BTB_ROW; i++){
        for (int j = 0; j < BTB_COL; j++){
            btb_table[i][j] = new BtbCell();
        }
    }

    Perceptron p = Perceptron();    
    std::cout << "Vetor de Pesos" << std::endl;
    p.printWeights();


    std::array<int, INPUT_SIZE> x = {1,1,1,1,0};
    short pred = p.predict(x);
    std::cout << pred <<std::endl;
    return 0;
}