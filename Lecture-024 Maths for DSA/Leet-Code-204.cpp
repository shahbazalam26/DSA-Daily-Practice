// 204. Count Primes
// https://leetcode.com/problems/count-primes/


class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool>prime(n+1,true);
        prime[0] = prime[1] = false;

        int cnt=0;
        for(int i=2; i<n; i++){

            if(prime[i]){
                cnt++;

                for(int j=2*i; j<n; j=j+i){
                    prime[j] = false;
                }
            }

        
        }

        return cnt;
    }
};







////time limit exceed 5000000---------
// class Solution {

// private:
//     bool isPrime(int n){
//         if(n<=1){
//             return false;
//         }
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }

// public:
//     int countPrimes(int n) {
//         int cnt=0;
//         for(int i=2; i<n; i++){

//             if(isPrime(i)){
//                 cnt++;
//             }
//         }
        
//         return cnt;
//     }
// };