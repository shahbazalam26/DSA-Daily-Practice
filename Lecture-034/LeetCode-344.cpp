// https://leetcode.com/problems/reverse-string/

class Solution {

private:
    void reverse(vector<char>&s, int start, int end){

        //base case
        if(start>=end) return;
        swap(s[start++],s[end--]);
        //recursive relation
        reverse(s,start,end);
    }
public:
    void reverseString(vector<char>& s) {
        reverse(s,0,s.size()-1);
        
    }
};