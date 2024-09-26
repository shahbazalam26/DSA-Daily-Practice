#include<iostream>
using namespace std;

void inputArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter element at index ["<<i<<"]:";
        cin>>arr[i];
    }
    return;
}

void linearSearch(int arr[],int size,int num){
    
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            cout<<num<<" is present at index "<<i<<endl;
            return;
        }
        
    }
    cout<<"Number is'nt present!";
    return;
}

int main(){

    int arr[100];
    int size;
    cout<<"Enter no of element in an array:";
    cin>>size;
    inputArr(arr,size);

    int num;
    cout<<"Enter number for search:";
    cin>>num;

    linearSearch(arr,size,num);
   
    return 0;

}
