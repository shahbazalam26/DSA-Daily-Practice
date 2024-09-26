// https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {

        int i = 0;
        int j = height.size()-1;
        int ans = 0;

        while(i<j){

            int len = j-i;
            
            int minHeight = min(height[i],height[j]);
            int area = len*minHeight;

            ans = max(area,ans);
            if(height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }
            

        }

        return ans;
        
    }
};

