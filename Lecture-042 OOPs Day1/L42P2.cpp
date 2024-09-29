#include<iostream>
using namespace std;

class Hero{

    private:
        char level;

    public:
        int health;


    char getLevel(){
        return level;
    }
    void setLevel(char ch){
        level = ch;
    }

    // default constructor
    // Hero(){
    //     cout<<"Constructor called...."<<endl;
    // }






    //parameterised constructor
    // Hero(int health){

    //     cout<<"addr of this: "<<this<<endl;
    //     this->health = health;
    // }




    Hero(int health,char level){

        cout<<"addr of this: "<<this<<endl;
        this->health = health;
        this->level = level;
    }




};

int main(){


    Hero temp (22, 'P');
    cout<<"addr of temp: "<<&temp<<endl;


   



/*
    //so we can prove this store addr of shahbaz
    Hero shahbaz(10);
    cout<<"Addr of Shahbaz: "<<&shahbaz<<endl;
*/
   



 
/* 
    cout<<"A"<<endl;

    //static allocation
    Hero shahbaz; 

    cout<<"B"<<endl;

    //dynamic allocation
    Hero *alam = new Hero;
    cout<<"C"<<endl;
*/
    









/*
    //static allocation
    Hero shahbaz;
    shahbaz.health = 70;
    cout<<"Health is: "<<shahbaz.health<<endl;
    shahbaz.setLevel('A');
    cout<<"Level is: "<<shahbaz.getLevel()<<endl;

    //dynamic allocation
    Hero *alam = new Hero;
    

    (*alam).health = 100;
    cout<<"Health is: "<<(*alam).health<<endl;
    (*alam).setLevel('B');
    cout<<"Level is: "<<(*alam).getLevel()<<endl;

    //we can also written as--
    alam->health = 120;
    cout<<"Health is: "<<alam->health<<endl;
    alam->setLevel('C');
    cout<<"Level is: "<<alam->getLevel()<<endl;
*/




    return 0;
}