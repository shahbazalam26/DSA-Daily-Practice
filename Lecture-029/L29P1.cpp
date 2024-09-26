#include<iostream>
using namespace std;
int main(){

    /*
    //for same row and col
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int** arr = new int* [n];

    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }

    //creation done

    //taking input

    cout<<"Enter Element: ";
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }

    // printing array
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/

   

   //for different row and col

    int row,col;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter col: ";
    cin>>col;


    int** arr = new int* [row];

    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    //creation done

    //taking input

    cout<<"Enter Element: ";
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            cin>>arr[i][j];
        }
    }

    // printing array
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //releasing memory of 1st
    for(int i=0;i<row;i++){
        delete []arr[i];
    }

    //releasing memory of 2nd
    delete []arr; 





    return 0;
}