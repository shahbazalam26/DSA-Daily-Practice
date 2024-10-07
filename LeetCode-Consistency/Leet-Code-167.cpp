// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

//TC- O(N), SC-O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int i=0;
        int j = numbers.size()-1;

        vector<int>ans(2,0);
        
        while(i<j){

            if(numbers[i] + numbers[j] == target){
                ans[0] = i+1;
                ans[1] = j+1;
                return ans;
            }
            else if(numbers[i] + numbers[j] > target){
                j--;
            }
            else{
                i++;
            }
        }

        return ans;
        
    }
};
