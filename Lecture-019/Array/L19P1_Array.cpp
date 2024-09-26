#include<iostream>
#include<array>             //library
using namespace std;

int main(){


    array<int,4>a = {1,2,3,4};  //creating array
    
    int size = a.size();        //size of array
    
    for(int i=0;i<size;i++){    
        cout<<a[i]<<endl;       //traversal array
    }

    cout<<"element at second index: "<<a.at(2)<<endl;       //finding value by index

    cout<<"Empty or not: "<<a.empty()<<endl;         //checking empty array or not its return either 0 or 1;

    cout<<"First Element: "<<a.front()<<endl;   //finding first element

    cout<<"Last Element: "<<a.back()<<endl;    //finding last element



/*              COMPLEXITY OF ALL OPEARTION IS O(1)                  */




    return 0;
}
