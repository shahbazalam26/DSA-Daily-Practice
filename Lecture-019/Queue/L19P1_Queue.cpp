#include<iostream>
#include<queue>    //library
using namespace std;

int main(){


    queue<string> q;      //creating queue of string type

    q.push("Shahbaz");     //inserting string in queue    
    q.push("alam");                             
    q.push("muhhamad");                   

    cout<<"before pop Top Element: "<<q.front()<<endl;   //print top element

    q.pop();    //pop element

    cout<<"After pop Top Element: "<<q.front()<<endl;

    cout<<"Size of stack: "<<q.size()<<endl;    //printing size of queue
          
    cout<<"Empty or not: "<<q.empty()<<endl;            //checking empty or not bool value return
    

   

/*                     COMPLEXITY O(1) FOR ALL                                         */


    return 0;
}
