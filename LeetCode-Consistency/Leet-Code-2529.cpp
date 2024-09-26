// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/

class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n = nums.size(), pos = 0, neg = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                neg++;
            }
            else if(nums[i]>0){
                pos++;
            }
        }

        return max(pos,neg);
    }
};