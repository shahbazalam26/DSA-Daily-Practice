// 912. Sort an Array
// link: https://leetcode.com/problems/sort-an-array/description/

/***************************** Time Limit Exceeded (Bubble sort) **************************************/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int n=nums.size();

        int swapped = false; //optimised case 
    
        for(int i=1; i<n; i++){
            //round 1 to n-1
            for(int j=0; j<n-i; j++){

                //process till n-1th index
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    swapped=true;
                }

            }
            if(swapped==false){
                break;
            }
        }
        return nums;
    }
};