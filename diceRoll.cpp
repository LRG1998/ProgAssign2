#include "dice.h"
#include <iostream>
using namespace std;

int roll1{0};
int roll2{0};

int rollSum(int val1, int val2){
    return val1 + val2;
}


int main(){
    int rolls[11]{0};
    srand(time(0));
    Dice dice1;
    Dice dice2;
    roll1 = dice1.value(dice1.roll());
    roll2 = dice2.value(dice1.roll());
    cout<< roll1 <<" , "<<roll2<<"\n";
    return 0;
}
