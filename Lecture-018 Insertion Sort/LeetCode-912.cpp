// 912. Sort an Array
// link: https://leetcode.com/problems/sort-an-array/description/

/***************************** Time Limit Exceeded (Insertion sort) **************************************/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int n=nums.size();

        int i=1;
        while(i<n){

            int temp = nums[i];
            int j = i-1;
            while(j>=0){

                if(nums[j] > temp){
                    nums[j+1] = nums[j];
                }
                else{
                    break;
                }

                j--;
            }

            nums[j+1] = temp;

            i++;
        }

        return nums;
    }
};
