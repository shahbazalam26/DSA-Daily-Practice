// 69. Sqrt(x)
// link: https://leetcode.com/problems/sqrtx/description/

class Solution {
public:
    
    int mySqrt(int x) {
        return binarySearch(x);
    }

    long long int binarySearch(int n){

        int start=0;
        int end=n;
        long long int mid=start + (end-start)/2;
        long long int ans=-1;

        while(start<=end){

            long long int sq=mid*mid;
            if(sq==n){
                return mid;
            }
            else if(sq<n){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }

            mid=start + (end-start)/2;
        }

        return ans;
    }
};