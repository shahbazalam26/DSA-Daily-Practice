// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

class Solution {
public:
    double average(vector<int>& salary) {

        int maxi = INT_MIN;
        int mini = INT_MAX;
        int n = salary.size();
        int sum = 0;

        for(int i=0;i<n;i++){
            maxi = max(maxi,salary[i]);
            mini = min(mini,salary[i]);
            sum+=salary[i];
        }

        double avg = (double)(sum-maxi-mini)/(n-2);
        return avg;


        //use test case--
        //[8000,9000,2000,3000,6000,1000] 
        //outPut = 4750.00000
        //[48000,59000,99000,13000,78000,45000,31000,17000,39000,37000,93000,77000,33000,28000,4000,54000,67000,6000,1000,11000]
        //41111.11111 -output
        
    }
};