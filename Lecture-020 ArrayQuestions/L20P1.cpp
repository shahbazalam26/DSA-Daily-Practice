#include<iostream>
#include<vector>
using namespace std;


//reversing
vector<int> reverse(vector<int> v){
    
    int size= v.size();
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(v[start], v[end]);
        start++;
        end--;
    }

    return v;

}

//printing
void print(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}


int main(){

    vector<int>v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

   vector<int> ans= reverse(v); //store reverse in ans
   print(ans);      //then print

    return 0;
}