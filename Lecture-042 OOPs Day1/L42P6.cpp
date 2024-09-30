#include<iostream>
#include<cstring>
using namespace std;

class Hero{    

    public:

    int health;
    char level;
    char *name;       



    void print(){
        cout<<endl;

        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"health: "<<this->health<<" ,";
        cout<<"level: "<<this->level<<" ]";

        cout<<endl;
    }

};

int main(){

    Hero hero1;
    hero1.level = 'A';
    hero1.health = 10;
    char name[8] = "Shahbaz";
    hero1.name = name;

    hero1.print();


    Hero hero2;
    //copy assingment operator------

    /*hero2.level= hero1.level;
    hero2.health = hero1.health;
    hero2.name = hero1.name;*/


    //copy assingment operator 1 line------
    hero2 = hero1;

    hero2.print();



    return 0;
}
