// 867. Transpose Matrix
//https://leetcode.com/problems/transpose-matrix/description/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> ansMatrix(col, vector<int>(row));
        
        for(int i=0; i<row;i++ ){
            for(int j=0; j<col; j++){
                ansMatrix[j][i] = matrix[i][j];
            }
        }

        return ansMatrix;
    }
};