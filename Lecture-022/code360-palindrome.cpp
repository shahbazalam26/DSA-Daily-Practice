// - Check Palindrome: https://bit.ly/3E55FvF 

#include <bits/stdc++.h>

char notSensitive(char ch){
     if(ch>='a' && ch<='z'){
        return ch - 'a' + 'A';
    }
    return ch;
}

bool hasAlpha(char ch){
    return (ch>='a' && ch<='z' || ch>='A' && ch<='Z');
}

bool hasNum(char ch){
    return (ch>='0' && ch<='9');
}

bool isValid(char ch){
    return (hasNum(ch) || hasAlpha(ch));
}

bool checkPalindrome(string s)
{
    int i=0;
    int e = s.size() -1;

    while(i<=e){
        if(isValid(s[i]) && isValid(s[e]) ){
            if(notSensitive(s[i]) == notSensitive(s[e])){
                i++;
                e--;
            }
            else{
                return 0;
            }
        }
        else if(!isValid(s[i])){
            i++;
        }
        else{
            e--;
        }
        
    }
    return 1;
}