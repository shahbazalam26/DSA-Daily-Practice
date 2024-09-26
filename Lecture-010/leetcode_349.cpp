// 349. Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays/description/


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        //using set to remove duplicate element
        set<int>ans; 
        int i = 0;
        int n = nums1.size();
        int m = nums2.size();
        while(i<n){
            int j=0;
            while(j<m){
                if(nums1[i] == nums2[j]){
                    ans.insert(nums1[i]);
                }
                j++;
            }
            i++;
        }

        //agin convet ans into vector form bcz return type is vector
        vector<int>uniqueAns(ans.begin(),ans.end());
        return uniqueAns;
    }
};