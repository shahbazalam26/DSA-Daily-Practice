// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n= nums.size();
        vector<int> ans(n, 0);

        for(int i=0; i<n; i++){
            int index = nums[i];
            ans[index]++;
        }

        for(int i=0;i<n;i++){
            if(ans[i] >= 2){
                return i;
            }
        }

        return -1;

    }
};