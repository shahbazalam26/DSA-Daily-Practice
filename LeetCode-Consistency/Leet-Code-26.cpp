// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

       
        int n = nums.size();
       
        int i=1;
        int j=0;

        while(i<n){
            if(nums[i] != nums[j]){
                nums[j+1] = nums[i];
                j++;
            }
            i++;
        }

        return j+1;
    }
};