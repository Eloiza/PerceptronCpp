#include "btb_cell.hpp"

BtbCell::BtbCell(){
    cycle = {0};
    pc = {0};
    takenCount = {0};
};

void BtbCell::setTakenCount(short int value){
    if(value >= 0 && value <= 3){
        this->takenCount = value;
    }
};

short int BtbCell::getTakenCount(){
    return takenCount;
}