#include <cstdlib>
#include <iostream>
#include <random>

class Dice {
public:
//Establishes the face and count of the dice. 
    Dice(int faces, int count){
        setFaces(faces);
        setCount(count);
    }
//Initialization code, prints to let me know the object works
    void Init(){
        std::cout << "Initialized" << std::endl;
        std::cout << faces<<std::endl;
    }
    //returns the face count
    int getFaces(){
        return faces;
    }
    
    int setFaces(int desired){
        //sets the face count.
        faces = desired;
        return faces;
    }
    int getCount(){
        //returns the amount of dice to roll
        return count;
    }
    int setCount(int desired){
        //sets the amount of dice to roll
        count = desired;
        return count;
    }
    int max(){
        //determines the maximum number the dice can roll
        return faces*count;
    }
    int roll(){
        //randomly decides a number for the dice, based on the max function.
        return rand() % max();
    }
    void trackRolls(int length){
        for(int i{0}; i< length; ++i){
            std::cout<<i;
        }
    }

private:
int faces{6};
int count{1};
};