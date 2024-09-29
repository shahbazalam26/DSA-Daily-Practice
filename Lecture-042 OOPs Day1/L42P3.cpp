#include<iostream>
using namespace std;

class Hero{

    public:

    int health;
    char level;

    //default constructor
    Hero(){
        cout<<"Default constructor called..."<<endl;;
    }

    //parameterised constructor
    Hero(int health, char level){

        this->health = health;
        this->level = level;
    }

};

int main(){




    return 0;
}