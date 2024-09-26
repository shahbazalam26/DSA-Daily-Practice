// - Subsequences: https://bit.ly/33hi3MB

#include <bits/stdc++.h> 
void solve(vector<string>& ans,string output,int index,string str){

	if(index>=str.length()){
		if(output.length()>0){
			ans.push_back(output);
		}
		return;
	}

	//exclude
	solve(ans,output,index+1,str);

	//include
	char ch = str[index];
	output.push_back(ch);
	solve(ans,output,index+1,str);

}
vector<string> subsequences(string str){
	
	vector<string>ans;
	string output = "";
	int index = 0;
	solve(ans,output,index,str);
	return ans;
	
}
