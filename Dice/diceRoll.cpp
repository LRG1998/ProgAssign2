#include "dice.h"
#include <iostream>
using namespace std;

int roll1{0};
int roll2{0};
int rolls[12]{0};

int main(){
    Dice dice1;
    Dice dice2;
    for(int i=0;i<36000000;i++){
        roll1 = dice1.roll();
        roll2 = dice2.roll();
        rolls[(roll1+roll2)-1] += 1;
    };
    int rollsLength = sizeof(rolls) / sizeof(int);
    for(int i = 0; i < rollsLength; i++){
        cout<<i+1<<" " << rolls[i]<<"\n";
    }
    return 0;
}

