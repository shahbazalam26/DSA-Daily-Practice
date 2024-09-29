#include<iostream>
#include<set>    //library
using namespace std;

int main(){

    set<int> s;

    s.insert(5);
    s.insert(4);
    s.insert(3);    //inserting element in set
    s.insert(2);    //complexity O(logn)
    s.insert(1);

     
    for(auto i:s){
        cout<<i<<" ";       //set always return output in sorted increasing order
    }cout<<endl;


    set<int>::iterator it = s.begin();      //creating iterator //complexity O(1) 
    it++;

    s.erase(it);        //erasing begin+1 wala index    //complexity O(logn)
    
    for(auto i:s){
        cout<<i<<" ";       //set always return output in sorted increasing order
    }cout<<endl;

    cout<<s.count(5)<<endl;       //it tells value is present or not in using 0 and 1
    cout<<s.count(2)<<endl;       //complexity O(logn)


    set<int>:: iterator itr= s.find(3);  //finding 3    //complexity O(logn)

    for(auto it=itr; it!=s.end(); it++){    //going from 3 to end   //complexity O(1)   s.end() ka size ka empty ka O(1) hoga
        cout<<*it<<" ";                         //print all value 
    }cout<<endl;


   


    return 0;
}
