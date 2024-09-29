#include<iostream>
using namespace std;
int main(){


    int amount;
    cout<<"Enter amount:";
    cin>>amount;

    switch(1){
        case 1:cout<<"notes of 100 rupee:"<<amount/100<<endl;
        case 2:cout<<"notes of 50 rupee:"<<(amount%100)/50<<endl;
        case 3:cout<<"notes of 20 rupee:"<<((amount%100)%50)/20<<endl;
        case 4:cout<<"coin of 1 rupee:"<<(((amount%100)%50)%20)/1<<endl;
        break;
        default:cout<<"Enter valid price";

    }






    return 0;
}