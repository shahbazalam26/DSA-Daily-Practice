#include<iostream>
#include<cstring>
using namespace std;

class Hero{    

    public:

    int health;
    char level;
    char *name;       


    //copy constructor
    // Hero(Hero& temp){

    //     char *ch = new char[strlen(temp.name) +1];
    //     strcpy(ch, temp.name);
    //     this->name = ch;

    //     cout<<"copy constructor called..."<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // } 


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


    //use dafault copy constructor do shallow copy that why
    //when we change  hero1.name[0] = 'P'; its reflect hero1 as well as hero2
    
    Hero hero2(hero1);
    //Hero hero2 = hero1;
    hero2.print();


    hero1.name[0] = 'P';
    hero1.print();
    hero2.print();


    return 0;
}
