// 283. Move Zeroes:
// link:https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        /*int i=0;
        int j=0;

        while(i<nums.size()){

            if(nums[i]==0){
                i++;
            }
            else if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
                i++;
            }
        }*/



        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
                i++;
            }
        }
        
    }
};

