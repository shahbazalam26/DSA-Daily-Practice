#include<iostream>
#include<vector>    //library
using namespace std;

int main(){


    vector<int> v;      //creating vector

    vector<int> a(5,1);              //creating vector of size 5 and all value with 1
    
    vector<int> last(a);            //copying a in vector last
    cout<<"print last: ";

    for(int i:last){    
        cout<<i<<" ";          // printing value of last that is [1,1,1,1,1]
    }
    cout<<endl;

    cout<<"capacity: "<<v.capacity()<<endl;     //capacity finding
    cout<<"size: "<<v.size()<<endl;             //size finding


    v.push_back(1);                             //inserting element or push
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;


    //difference btw size and capacity
    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;


    cout<<"Element at 2nd index: "<<v.at(2)<<endl;      //accessing by index


    cout<<"first element: "<<v.front()<<endl;           //first element
    cout<<"last element: "<<v.back()<<endl;             //last element


    //showing result before pop and after pop

    cout<<"before pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();                       //pop element from vector

    cout<<"After pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //showing result before pop and after pop

    cout<<"Before clear size: "<<v.size()<<endl;

    v.clear();              //clearing vector

    cout<<"After clear size: "<<v.size()<<endl;
    cout<<"After clear size capacity not change: "<<v.capacity()<<endl;  //but capacity not clear





/*                     COMPLEXITY O(1) FOR ALL                                             */


    return 0;
}
