// https://leetcode.com/problems/median-of-two-sorted-arrays/

// think approach in O(log(n+m)) time complexity



// this is done in O(n+m) time complexity

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int i=0;
        int n = nums1.size();
        int j=0;
        int m = nums2.size();

        //merge to sorted array

        vector<int>ans;

        while(i<n && j<m){

            if(nums1[i] <=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }

        int size = ans.size();
        
        //finding median in odd or even size of new merge array

        if(size % 2 == 0){
            int mid = size/2;
            return (ans[mid-1] + ans[mid])/2.0;
        }
        else{
            return ans[size/2];
        }

        return -1;
        
    }
};
