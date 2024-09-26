// https://leetcode.com/problems/find-target-indices-after-sorting-array/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        int n=nums.size();
        //sorting array
        sort(nums.begin(),nums.end());

        vector<int>ans;
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                ans.push_back(i);
            }
            else if(nums[i]>target){
                break;
            }
        }

        return ans;
        
    }
};