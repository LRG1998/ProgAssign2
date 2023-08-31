#include "dice.h"
#include <iostream>

int main(){
    Dice dice1{6,2};
    dice1.Init();
    std::cout<<dice1.roll()<<"\n" << dice1.roll()<< "\n";
    return 0;
}