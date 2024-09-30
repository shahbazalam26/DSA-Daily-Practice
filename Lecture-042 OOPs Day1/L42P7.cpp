#include<iostream>
#include<cstring>
using namespace std;

class Hero{    

    public:

    int health;
    char level;
    char *name;   

    //creating static data memeber
    static int timeToComplete; 



    void print(){
        cout<<endl;

        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"health: "<<this->health<<" ,";
        cout<<"level: "<<this->level<<" ]";

        cout<<endl;
    }

    //creating destructor
    ~Hero(){
        cout<< "Destructor called..."<<endl;
    }


    //creating static function-----
    static int random(){

        //this is correct
        return  timeToComplete;

        /*
            //access only static data member it is not static
            return health;
        */
       


        /*
            //this keyword is'nt valid in static function
            return this.health;
        */
        
    }

};

//innitialising static data member outside the class
int Hero::timeToComplete = 5;

int main(){


    //calling static function
    cout<<Hero::random()<<endl;




/*
    //directly access static data member without creating object
    cout<<Hero::timeToComplete<<endl;
*/




/*
    //this is not recommanded to access static data member ignore this type of access
    Hero a;
    Hero b;
    cout<<"a: "<<a.timeToComplete<<endl;

    b.timeToComplete = 10;

    cout<<"a: "<<a.timeToComplete<<endl;
    cout<<"b: "<<b.timeToComplete<<endl;
*/





/*
    //static object
    Hero a;

    //dynamic object
    Hero *b = new Hero();

    
    delete b;
  
*/


    


    return 0;
}
