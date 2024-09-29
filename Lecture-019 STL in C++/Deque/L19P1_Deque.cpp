#include<iostream>
#include<deque>    //library
using namespace std;

int main(){


    deque<int> d;      //creating deque

    d.push_back(5);                             //inserting element in back

    d.push_front(2);                             //inserting element in front
    cout<<endl;

    d.push_back(3);                     //inserting in back

    cout<<"first element: "<<d.front()<<endl;           //first element
    cout<<"last element: "<<d.back()<<endl;             //last element

    cout<<"Printing first index element: "<<d.at(1)<<endl;     //print index 1 element

    cout<<"Empty or not: "<<d.empty()<<endl;            //checking empty or not bool value return
    
    cout<<"Before erase: "<<d.size()<<endl;             //checking size
   
    d.erase(d.begin(), d.begin() + 1);              //erasing data from deque

    cout<<"After erase: "<<d.size()<<endl;              //checking size

    for(int i:d){
        cout<<i<<" ";               //printing deque element
    }
    cout<<endl;
    
    

/*                     COMPLEXITY O(1) FOR ALL except erase wala chorkar                                           */


    return 0;
}
