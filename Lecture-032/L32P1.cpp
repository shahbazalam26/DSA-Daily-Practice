#include<iostream>
using namespace std;

void reachHome(int src,int dest){

    cout<<"source: "<<src<<" destination: "<<dest<<endl;
    //base case
    if(src == dest){
        cout<<"i reach home...";
        return;
    }
    //processing
    src++;
    reachHome(src,dest);

}

int main(){

    int src = 1;
    int dest = 10;
    reachHome(src, dest);

    return 0;
}