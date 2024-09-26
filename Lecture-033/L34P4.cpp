#include<iostream>
using namespace std;

bool binarySrch(int *arr,int s,int e,int key){

    if(s>e) return false; //base case
    int mid = s + (e-s)/2;
    if(arr[mid]==key) return true;
    
    if(arr[mid]<key) return binarySrch(arr,mid+1,e,key); //recursive call
    else return binarySrch(arr,s,mid-1,key); //recursive call
    
}

int main(){

    int arr[7] = {2,4,6,8,9,12,15};
    bool ans = binarySrch(arr,0,6,70);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"Not Found!"<<endl;
    }
    

    return 0;
}