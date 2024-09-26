#include<iostream>
#include<list>    //library
using namespace std;

int main(){


    list<int> l;      //creating list


    list<int> a(5,100);              //creating list of size 5 and all value with 1
    
    list<int> last(a);   //comlexity O(N)         //copying a in list last
    cout<<"print last: ";

    for(int i:last){    
        cout<<i<<" ";          // printing value of last that is [100,100,100,100,100]
    }

    l.push_back(5);                             //inserting element in back

    l.push_front(2);                             //inserting element in front
    cout<<endl;

    l.push_back(3);                     //inserting in back


    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"first element: "<<l.front()<<endl;           //first element
    cout<<"last element: "<<l.back()<<endl;             //last element


    cout<<"Empty or not: "<<l.empty()<<endl;            //checking empty or not bool value return
    
    cout<<"Before erase: "<<l.size()<<endl;             //checking size
   
    l.erase(l.begin());              //erasing data from list

    cout<<"After erase: "<<l.size()<<endl;              //checking size

    for(int i:l){
        cout<<i<<" ";               //printing list element
    }
    cout<<endl;
    
    

/*                     COMPLEXITY O(1) FOR ALL except copy wala chorkar line 13                                          */


    return 0;
}
