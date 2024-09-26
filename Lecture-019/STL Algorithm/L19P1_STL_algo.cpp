#include<iostream>
#include<algorithm>    //library
#include<vector>
using namespace std;

int main(){

    vector<int>v;

    //for binary search array will always sorted
    v.push_back(1);
    v.push_back(5);
    v.push_back(17);
    v.push_back(25);
    v.push_back(33);

    cout<<"Finding 6: "<<binary_search(v.begin(), v.end(), 6)<<endl;    //binary Search---->
    cout<<"Finding 25: "<<binary_search(v.begin(), v.end(), 25)<<endl;


    //lower bound return iterator for 6 that is its index

    cout<<"Lower bound: "<<lower_bound( v.begin(), v.end(), 25)-v.begin() <<endl;
    cout<<"Upper bound: "<<upper_bound( v.begin(), v.end(), 25)-v.begin() <<endl;


    int a=3;
    int b=5;

    cout<<"max of a,b: "<<max(a,b)<<endl; //finding maximum value
    cout<<"min of a,b: "<<min(a,b)<<endl; //finding minimum value

    swap(a,b);          //swapping value
    cout<<"va;lue of a,b is: "<<a<<", "<<b<<endl;


    string s="Shahbaz";
    reverse(s.begin(), s.end());        //reverse string
    cout<<"Reverse string of Shahbaz is: "<<s<<endl;



    cout<<"Before rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";       //printing before rotation 1 5 17 25 33
    }cout<<endl;

    rotate(v.begin(),v.begin()+1, v.end());         //rotate the numbers

    cout<<"after rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";       //printing after rotation 5 17 25 33 1
    }cout<<endl;



    // combiunation of quick sort, heap sort, insertin sort is called introsort
    sort(v.begin(),v.end());    //sorting the numbers
    cout<<"sort array is:";
    for(int i:v){
        cout<<i<<" ";       
    }
    cout<<endl;


    return 0;
}
