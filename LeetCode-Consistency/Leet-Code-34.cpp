// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int>ans;

        //left occurence----
        int s=0;
        int e = nums.size()-1;
        int m = s+(e-s)/2;
        int index1 = -1;

        while(s<=e){
            
            if(nums[m] == target){
                index1 = m;
                e=m-1;
            }
            else if(nums[m] > target){
                e = m - 1;
            }
            else{
                s = m + 1;
            }
            m = s+(e-s)/2;
        }




        //right occurence----

        s=0;
        e = nums.size()-1;
        m = s+(e-s)/2;
        int index2 = -1;

        while(s<=e){
            
            if(nums[m] == target){
                index2 = m;
                s=m+1;
            }
            else if(nums[m] > target){
                e = m - 1;
            }
            else{
                s = m + 1;
            }
            m = s+(e-s)/2;
        }

        ans.push_back(index1);
        ans.push_back(index2);
        
        return ans;

    }
};