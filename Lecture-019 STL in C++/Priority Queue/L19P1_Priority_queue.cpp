#include<iostream>
#include<queue>    //library
using namespace std;

int main(){


    priority_queue<int>maxi;      //creating max heap queue

    priority_queue< int,vector<int> , greater<int> > mini;      //creating min heap

    maxi.push(1);                 
    maxi.push(5);                 //comlexity O(logn) 
    maxi.push(0);                 //push element in max-heap
    maxi.push(2);                 

    //printing element in max-heap
    cout<<"max-heap: ";
    int size = maxi.size();
    for(int i=0; i<size; i++){
        cout<<maxi.top()<<" ";      //comlexity O(1)  
        maxi.pop();                 //comlexity O(logn)  
    }

    cout<<endl;

    mini.push(1);                 
    mini.push(5);                 //comlexity O(logn) 
    mini.push(0);                 //push element in max-heap
    mini.push(2);                 

    //printing element in max-heap

    cout<<"min heap: ";
    int size2 = mini.size();
    for(int i=0; i<size2; i++){
        cout<<mini.top()<<" ";  //complexity O(1)
        mini.pop();             //comlexity log(N)  
    }
    cout<<endl;

    cout<<"Size of stack: "<<maxi.size()<<endl;     //complexity O(1)   //printing size of max-heap
          
    cout<<"Empty or not: "<<mini.empty()<<endl;     //complexity O(1)       //checking empty or not bool value return
    

    return 0;
}
