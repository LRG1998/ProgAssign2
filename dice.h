#include <iostream>

class Dice {
public:

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