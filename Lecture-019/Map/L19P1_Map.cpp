#include<iostream>
#include<map>    //library
using namespace std;

int main(){

    map<int, string>m;      //creating map key is int value is string

    m[1]="Muhhamad";        //creating key value pair
    m[5]="Alam";
    m[2]="Shahbaz";

    m.insert({13,"bheem"});         //inserting in key value pair


    cout<<"before erase ->"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;     //printing key value pair

    }

    m.erase(13);    //erasing key value pair

    cout<<"after erase ->"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;     //printing key value pair

    }

    cout<<"Finding 13-> "<<m.count(13)<<endl;


    cout<<"finding value: ";
    auto it = m.find(2);            //fiding 2

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<" ";         //printing key from 2 to end value
    }
    

   
    //insert,  erase, find, count comlexity is O(logn)

    return 0;
}
