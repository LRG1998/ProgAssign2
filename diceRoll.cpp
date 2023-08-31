#include "dice.h"
#include <iostream>

int main(){
    Dice dice1{6,2};
    dice1.trackRolls(10);
    return 0;
}