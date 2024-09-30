// https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>ans(nums.size(),0);

        for(int i=0 ;i<nums.size(); i++){
            int index = nums[i];
            ans[index-1]++;
        }

        nums.clear();
        
        for(int i=0; i<ans.size(); i++){
            if(ans[i] == 2){
                nums.push_back(i+1);
            }
        }

        return nums;
    }
};