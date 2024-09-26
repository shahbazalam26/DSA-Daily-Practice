#include<iostream>
using namespace std;

int pivotIdx(int arr[],int size){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
            
        }
        mid=s+(e-s)/2;
    }
    return s;
    //return e;

}
int main(){

    int arr[100]={1,2,3,4,5};
    cout<<"pivot index is: "<<pivotIdx(arr,5)<<endl;





    return 0;
}