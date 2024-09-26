#include<iostream>
#include<climits>
using namespace std;

void InputArr(int arr[][100],int row ,int col){
    for(int i=0; i<row; i++){
        for(int j=0;j<col; j++){
            cout<<"Enter element in 2d array at index ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
}

void printArr(int arr[][100],int row ,int col){
    for(int i=0; i<row; i++){
        for(int j=0;j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rowWiseSum(int arr[][100],int row,int col){

    cout<<"printing row wise sum"<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void ColWiseSum(int arr[][100],int row,int col){

    cout<<"printing row wise sum"<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}

void largestRowSum(int arr[][100],int row,int col){

    int maxi = INT_MIN;
    int rowAns = -1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum = sum + arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            rowAns = i;
        }

        
    }

    cout<<"Maximum number in row is: "<<maxi<<" at row: "<<rowAns+1; //returning index in 1th not 0th
}

int main(){

    int arr[100][100];

    int row,col;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter Col: ";
    cin>>col;

    InputArr(arr,row,col);
    printArr(arr,row,col);


    rowWiseSum(arr,row,col);
    ColWiseSum(arr,row,col);

    largestRowSum(arr,row,col);

    return 0;
}