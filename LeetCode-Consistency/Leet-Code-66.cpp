// https://leetcode.com/problems/plus-one/description/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for(int i=n-1; i>=0; i--){
            
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            // if greater than 9 then its 10 assign 0
            digits[i] = 0;
        }

        //if we consider this line that meansall digit are 9 then insert 1 
        digits.insert(digits.begin(),1);
        return digits;

    }
};