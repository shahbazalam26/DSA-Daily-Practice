// - Merge 2 sorted arrays:https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int p=m+n;
        vector<int>nums3(p);
        int k=0;
        int i=0;
        int j=0;

        while(i<m && j<n){
            
            if(nums1[i] < nums2[j]){
                nums3[k++] = nums1[i++];
            }
            else{
                nums3[k++] = nums2[j++];
            }
        }
        while(i<m){
            nums3[k++] = nums1[i++];
        }
        while(j<n){
            nums3[k++] = nums2[j++];
        }

        nums1 = nums3;
    }
};