#include<iostream>
using namespace std;

char getMaxOccurChar(string s){

    int arr[26] ={0};

    //create and array and count character
    for(int i=0; i<s.length(); i++){

        char ch = s[i];
        int number = 0;

        if(ch>='a' && ch<='z'){ //lowercase
            number = ch-'a';
        }
        else{ //uppercase
            number = ch-'A';
        }
        arr[number]++;
    }

    //finding maximum no occur character
    int maxi=-1;
    int ans;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    return ans + 'a';
}


int main(){

    string s = "testsample";
    cout<<getMaxOccurChar(s)<<endl;






    return 0;
}