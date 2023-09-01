#include <cstdlib>
#include <iostream>
#include <random>
#include <time.h>

using namespace std;
class Dice {
public:

//Establishes the face and count of the dice. 
    Dice(){}
    int value(int input){
        return input;
    }
//Initialization code, prints to let me know the object works
    void Init(){
        std::cout << "Initialized" << std::endl;    
    }
    int roll(){
        return (rand() % 6) +1;
    }
private:
};