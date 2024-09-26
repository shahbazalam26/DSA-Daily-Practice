#include<iostream>
#include<stack>    //library
using namespace std;

int main(){


    stack<string> s;      //creating stack of sting type

    s.push("Shahbaz");     //inserting string     
    s.push("alam");                             
    s.push("muhhamad");                   

    cout<<"before pop Top Element: "<<s.top()<<endl;   //print top element

    s.pop();    //pop element

    cout<<"After pop Top Element: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;    //printing szie of stack
          
    cout<<"Empty or not: "<<s.empty()<<endl;            //checking empty or not bool value return
    

   

/*                     COMPLEXITY O(1) FOR ALL                                         */


    return 0;
}
