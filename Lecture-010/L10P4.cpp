#include<iostream>
using namespace std;
void sort01(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==2){
            j--;
        }
        else if(arr[i]==1){
            

        }
        else if(arr[i]==2 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
    }
    return;
    
}
int main(){

    int arr[100]={0,2,2,2,0,0,0,0};
    sort01(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}