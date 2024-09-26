// 1752. Check if Array Is Sorted and Rotated
// link:https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n=nums.size();
        int cnt=0;
        
        for(int i=1;i<n; i++){
            if(nums[i-1] > nums[i]){
                cnt++;
            }
        }

        //special case
        if(nums[n-1] > nums[0]){
            cnt++;
        }
        //cnt<=1 if array is alredy sorted
        return cnt<=1;
    }
};