#include <cstdlib>
#include <iostream>
#include <random>
#include <time.h>

using namespace std;
class Dice {
public:
int one{0};
int two{0};
int three{0};
int four{0};
int five{0};
int six{0};
int seven{0};
int eight{0};
int nine{0};
int ten{0};
int eleven{0};
int twelve{0};
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
        return faces*count -1;
    }
    int roll(){
        //randomly decides a number for the dice, based on the max function.
        return rand() % max()+2;
    }
    void trackRolls(int length){
        for(int i{0}; i< length; ++i){
            rolls(roll());
        }
    }
    void rolls(int diceRoll){
        switch(diceRoll){
            case 2:
                two += 1;
                break;
            case 3:
                three += 1;
                break;
            case 4:
                four += 1;
                break;
            case 5:
                five += 1;
                break;
            case 6:
                six += 1;
                break;
            case 7:
                seven+= 1;
                break;
            case 8:
                eight += 1;
                break;
            case 9:
                nine += 1;
                break;
            case 10:
                ten += 1;
                break;
            case 11:
                eleven += 1;
                break;
            case 12:
                twelve += 1;
                break;
        }
    }
    int getValue(int value) {
        return value;
    }
    void output(){
        cout << "Two: " << two << "\n";
        cout << "Three: " << three << "\n";
        cout << "Four: " << four << "\n";
        cout << "Five: " << five << "\n";
        cout << "Six: " << six << "\n";
        cout << "Seven: " << seven << "\n";
        cout << "Eight: " << eight << "\n";
        cout << "Nine: " << nine << "\n";
        cout << "Ten: " << ten << "\n";
        cout << "Eleven: " << eleven << "\n";
        cout << "Twelve: " << twelve << "\n";
    }

private:
int faces{6};
int count{1};

};