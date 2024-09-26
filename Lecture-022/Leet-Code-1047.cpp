// 1047. Remove All Adjacent Duplicates In String (H/W)
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/ 


//my approach--->
// T.C- O(N^2)
//S.C- O(1)
class Solution {
public:
    string removeDuplicates(string s) {

        int i=0;
        while(i<s.length()){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                if(i>0){
                    i--;
                }
                
            }
            else{
                i++;
            }
        }
        return s;
    }
};



//another one
class Solution {
public:
    string removeDuplicates(string s) {

        string temp = "";
        int i=0;

        while( i< s.length()){
            
            if(!temp.empty() && s[i] == temp.back()){
                temp.pop_back();
            }
            else{
                temp.push_back(s[i]);
            }
            i++;
        }
        return temp;
    }
};



// T.C- O(N)
//S.C- O(N)

class Solution {
public:
    string removeDuplicates(string s) {

        string temp = "";
        int i=0;

        while( i< s.length()){
            
            if(temp.empty() || s[i] != temp.back()){
                temp.push_back(s[i]);
            }
            else{
                temp.pop_back();
            }
            i++;
        }
        return temp;
    }
};
