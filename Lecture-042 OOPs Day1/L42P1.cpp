#include<iostream>
using namespace std;

//creation of class
class Hero{

    //properties
    private: //access modifier inside or outside the class
    int health;

    public: //access modifier only access inside the class
    char level;

    void print(){
        cout<<health<<endl; //no error bcz inside the class
    }

    //getter and setter to get and set private data member

    int getHealth(){
        return health;
    }
    void setHealth(int h ){ //char pass
        health = h;
        // if(pass == 'a'){
        //     health = h;
        // }
    }
};


int main(){

    //creation of object
    Hero shahbaz;

    shahbaz.level = 'A'; //public member can direct set

    //use setter to set health 
    shahbaz.setHealth(70);

    //using dot operator we can access data member
    //give error bcz health is private

    //cout<<"Ramesh health is: "<<shahbaz.health<<endl; 

    //use getter to get health
    cout<<"Shahbaz health is: "<<shahbaz.getHealth()<<endl;

    //public access modifier can direct access 
    cout<<"Shahbaz level is: "<<shahbaz.level<<endl; 


    return 0;
}