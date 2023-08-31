#include <cstdlib>
#include <iostream>
#include <random>

class Dice {
public:
    Dice(int faces, int count){
        setFaces(faces);
        setCount(count);
    }

    void Init(){
        std::cout << "Initialized" << std::endl;
        std::cout << faces<<std::endl;
    }
    int getFaces(){
        return faces;
    }
    int setFaces(int desired){
        faces = desired;
        return faces;
    }
    int getCount(){
        return count;
    }
    int setCount(int desired){
        count = desired;
        return count;
    }
    int max(){
        return faces*count;
    }
    int roll(){
        return rand() % max();
    }

private:
int faces{6};
int count{1};
};