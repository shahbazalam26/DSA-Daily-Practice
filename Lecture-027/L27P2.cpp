#include<iostream>
using namespace std;

void update(int **p){
    //p = p + 1;
    //kuch change hoga? -NO  

    //*p = *p + 1;
    // kuch change hoga ? -yes add 4 bit in p value 710 to 714

    // **p = **p +1;
    // //kuch change hoga
}



int main(){

    int i = 5;
    int* p = &i;
    int** p2 = &p;

    

    cout<<"before: "<<i<<endl;
    cout<<"before: "<<p<<endl;
    cout<<"before: "<<p2<<endl;
    update(p2);
    cout<<"after: "<<i<<endl;
    cout<<"after: "<<p<<endl;
    cout<<"after: "<<p2<<endl;


    return 0;    
}