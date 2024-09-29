// Sum Of Two Arrays 
// link: Add arrays: https://bit.ly/3DXfsDZ 


#include <bits/stdc++.h> 

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i=n-1;
    int j=m-1;
    vector<int>ans;
    int carry = 0;
    int sum = 0;

    while(i>=0 && j>=0){

        sum = a[i]+b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //case 1
    while(i>=0){
        sum = a[i]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans.begin(),ans.end());
    return ans;
}