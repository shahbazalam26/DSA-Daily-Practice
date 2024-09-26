#include<iostream>
using namespace std;

char toUpperCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch - 'a' + 'A';
    }
    return ch;
   
}
    
bool checkPalindrome(char name[],int len){

    int s=0;
    int e=len-1;
    while(s<=e){
        if(toUpperCase(name[s])!= toUpperCase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverseString(char name[],int len){
    int s=0;
    int e = len-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int cnt = 0;

    for(int i=0; name[i] != '\0'; i++){
        cnt++;
    }
    return cnt;
}

int main(){

    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"your name is: "<<name<<endl;

    int len = getLength(name);
    cout<<"Lenght is: "<<len<<endl;
    reverseString(name ,len);
    cout<<"your name is: "<<name<<endl;

    cout<<"Name is palindrome or not: "<<checkPalindrome(name,len); 

    



    return 0;
}