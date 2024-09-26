// https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int n) {
        
        //base case
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        return (fib(n-1) + fib(n-2));
    }
};




//using loop---------

class Solution {
public:
    int fib(int n) {
        
        if(n==0 || n==1){
            return n;
        }

        int fib0 = 0;
        int fib1 = 1;
        int fib2 = fib0 + fib1;

        for(int i=2; i<n; i++){
            
            fib0 = fib1;
            fib1 = fib2;
            fib2 = fib0 + fib1;

        }
        return fib2;

    }
};
