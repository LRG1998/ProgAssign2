
#include <iostream>
#include <random>

using namespace std;
class Dice {
public:

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