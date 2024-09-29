// https://leetcode.com/problems/letter-combinations-of-a-phone-number/


class Solution {
private:
    void solve(string digits, string mapping[], string output,vector<string>&ans, int index){

        //base case
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }

        int num = digits[index] - '0';
        string str = mapping[num];

        for(int i=0; i<str.length(); i++){
            output.push_back(str[i]);
            solve(digits,mapping,output,ans,index+1);
            output.pop_back(); //back tracking concept - little bit
        }

    }
    
public:
    vector<string> letterCombinations(string digits) {

        vector<string>ans;

        if(digits.length() == 0){
            return ans;
        }

        string mapping[10]  = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output = "";
        
        int index = 0;
        solve(digits,mapping,output,ans,index);
        return ans;
        
    }
};