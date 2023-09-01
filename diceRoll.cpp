#include "dice.h"
#include <iostream>

int main(){
    srand(time(0));
    Dice dice{6,2};
    dice.trackRolls(100000);
    dice.output();
    return 0;
}