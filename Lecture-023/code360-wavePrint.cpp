// - Wave Print: https://bit.ly/329Le3K

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{   
    vector<int>ans;
    for(int col = 0; col<mCols; col++){

        //if col is odd then bottom to top
        if(col&1){
            for(int row=nRows-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }

        //top to bottom 0 or even
        else{
            for(int row=0; row<nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
    
}