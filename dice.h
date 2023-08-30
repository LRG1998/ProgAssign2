#include <iostream>
#include <random>

class Dice {
public:
Dice(int faces{6}, int count {1});

    void Init(){
        std::cout << "Initialized" << std::endl;
        getFaces();
        std::cout << faces<<std::endl;
    }
    int getFaces(){
        return faces;
    }

private:
int faces{6};
};