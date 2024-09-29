// - Reverse Strings: https://bit.ly/3r8UJcf 

#include <bits/stdc++.h>

void reverse(int i,int j,string &str){
	if(i>j) return;
	swap(str[i++], str[j--]);
	return reverse(i,j,str);
}
string reverseString(string str)
{
	reverse(0,str.length()-1,str);
	return str;
}