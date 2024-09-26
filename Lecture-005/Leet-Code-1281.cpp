//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {

        int product=1;
        int sum=0;
        while(n!=0){
            int rem=n%10;
            product*=rem;
            sum+=rem;
            n=n/10;
        }
        int ans=product-sum;

        return ans;
    }
};




// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15
