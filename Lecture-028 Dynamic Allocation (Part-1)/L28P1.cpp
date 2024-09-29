#include<iostream>
using namespace std;

void update(int i){
    i++;
}
void update2(int& j){
    j++;
}

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){


    /* int i=5;

    //create a reference variable

    int& j = i;

    cout<< i <<endl;
    i++;
    cout<< i <<endl;
    j++;
    cout<< i <<endl;
    cout<< j <<endl;*/



    /*int i=10;
    int j=10;
    update(i);
    update2(j);
    cout<< i <<endl;
    cout<< j <<endl;*/



    /*char ch = 'q';
    cout<< sizeof(ch) <<endl;

    char* c = &ch;
    cout<< sizeof(c)<<endl;*/


    /*int n;
    cout<<"Enter size: ";
    cin>>n;

    //variable size array---
    int *arr = new int[n];

    cout<<"Enter array element: "<<endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    int ans = getSum(arr,n);
    cout<<"ans is: "<<ans<<endl; */


    /*//case 1
    while(true){
        int i=5;
        cout<<i<<" ";
    }*/
 
    /*//case 2
    while(true){
        int *p = new int;
    }*/





   /*
   //void pointer
   int a=5;
   int *ip = &a;
   void *v = &a;
   cout<<*ip<<endl;
   cout<<a<<endl;
   cout<<ip<<endl;
   cout<<v<<endl;
   //cout<<*v<<endl; //not work bcz not store valuw of any data type
   */


  //adress typecasting
  int a=10;
  void* ptr= &a;
  cout<<"Adress of a: "<<ptr<<endl;
  cout<<"value of a: "<< *(int*)ptr <<endl;



    return 0;
}