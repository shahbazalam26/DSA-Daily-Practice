// 1137. N-th Tribonacci Number
// https://leetcode.com/problems/n-th-tribonacci-number/


class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1 || n==2){
            return 1;
        }

        int firstTerm = 0;
        int secondTerm = 1;
        int thirdTerm = 1;
        int nthTribonacci = 0;

        for(int i=3;i<=n;i++){

            nthTribonacci = firstTerm + secondTerm + thirdTerm;
            firstTerm = secondTerm;
            secondTerm = thirdTerm;
            thirdTerm = nthTribonacci;
        }
        return nthTribonacci;
    }
};