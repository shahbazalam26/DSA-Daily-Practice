// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

class Solution {
public:
    int subtractProductAndSum(int n) {

        int sum=0;
        int multi = 1;

        while(n!=0){

            int lastDigit = n%10;
            
            sum+=lastDigit;
            multi*=lastDigit;

            n=n/10;
        }
    
        return multi-sum;
    }
};