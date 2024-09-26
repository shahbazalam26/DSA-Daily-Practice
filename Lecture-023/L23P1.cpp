#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int row,int col,int target){

    for(int i=0;i<row;i++){
        for(int j=0;j<col; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    // int arr[3][4]; //creating 2d array

    //creating 2d array in this way
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};


    // // taking input row wise
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<"Enter element in 2d array at index ["<<i<<"]["<<j<<"]: ";
    //         cin>>arr[i][j];
    //     }
    // }


    // //taking input col wise
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<"Enter element in 2d array at index ["<<j<<"]["<<i<<"]: ";
    //         cin>>arr[j][i];
    //     }
    // }

    // printing 2d array
    cout<<"printing array-->"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    //search element

    cout<<"Enter element for search:";
    int target;
    cin>>target;
    if(isPresent(arr,3,4,target)){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not present";
    }




    return 0;
}