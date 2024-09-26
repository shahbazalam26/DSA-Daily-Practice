//https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(int n) {
        
        // int ans=0;
        // int i=0;
        // while(n!=0){
        //     int bit=n%2;
        //     if(bit==1){
        //         i++;
        //     }
        //     n=n/2;

        // }
        // return i;


        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;

        return 0;
    }
};



// Input: n = 128

// Output: 1

// Explanation:

// The input binary string 10000000 has a total of one set bit.