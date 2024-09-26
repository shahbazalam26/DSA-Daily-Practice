#include<iostream>
using namespace std;

bool checkPalindrome(string& str,int i,int len){

    if(i>len-i-1){
        return true;
    }
    if(str[i] != str[len-i-1]){
        return false;
    }
    
    return checkPalindrome(str,i+1,len);

}

int main(){

    string str = "abbccbba";
    bool ans = checkPalindrome(str,0,str.length());
    if(ans){
        cout<<"Sting is plaindrome."<<endl;
    }
    else{
        cout<<"string is not plaindrome."<<endl;
    }



    return 0;
}