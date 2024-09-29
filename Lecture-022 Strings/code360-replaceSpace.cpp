// - Remove all occurrences of substring: https://bit.ly/3sfP71Q 

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	
	string temp=""; //write optimised solution without using extra space

	for(int i=0;i<str.size();i++){
		if(str[i]==' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}