#include<iostream>
using namespace std;
int main(){

    int row;

    cout<<"Enter size of row: ";
    cin>>row;

    // int m;
    // cout<<"Enter size of col: ";
    // cin>>m;

    int *col = new int[row];

    cout<<"Enter size of each row: ";
    for(int i=0;i<row;i++){
        cin>>col[i];
    }

    int **arr = new int* [row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col[i]];
    }

    //taking input
    cout<<"Enter array element: ";

    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cin>>arr[i][j];
        }
    }

    //printing
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    for(int i=0;i<row;i++){
        delete []arr[i];
    }

    delete []arr;

    delete[] col;







    return 0;
}