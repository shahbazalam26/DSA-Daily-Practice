#include<iostream>
using namespace std;

bool linearSrch(int arr[],int size,int key){
    
    //base case
    if(size==0) return false;
    
    if(arr[0] == key) return true;

    return linearSrch(arr+1, size-1,key);
    
}

int main(){

    int arr[5] = {3,5,1,2,6};
    bool ans = linearSrch(arr,5,50);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"Not Found!"<<endl;
    }
    

    return 0;
}