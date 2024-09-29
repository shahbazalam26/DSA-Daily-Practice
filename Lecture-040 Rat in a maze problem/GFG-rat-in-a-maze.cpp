// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1


class Solution {
  private:
    
    bool safe(vector<vector<int>> &mat,vector<vector<int>>visited,int x, int y,int n){
        if((x>=0 && x<n) &&(y>=0 && y<n) && visited[x][y] == 0 && mat[x][y] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &mat,vector<vector<int>>visited,int x, int y,vector<string>&ans,int n,string path){
        
        //base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        //move U,D,L,R
        
        
        //right
        int newx = x;
        int newy = y+1;
        
        if(safe(mat,visited,newx,newy,n)){
            path.push_back('R');
            solve(mat,visited,newx,newy,ans,n,path);
            path.pop_back();
            
        }
        
        
        //down
        newx = x+1;
        newy = y;
        
        if(safe(mat,visited,newx,newy,n)){
            path.push_back('D');
            solve(mat,visited,newx,newy,ans,n,path);
            path.pop_back();
            
        }
        
        //up
        newx = x-1;
        newy = y;
        
        if(safe(mat,visited,newx,newy,n)){
            path.push_back('U');
            solve(mat,visited,newx,newy,ans,n,path);
            path.pop_back();
            
        }
        
        //left
        newx = x;
        newy = y-1;
        
        if(safe(mat,visited,newx,newy,n)){
            path.push_back('L');
            solve(mat,visited,newx,newy,ans,n,path);
            path.pop_back();
            
        }
        
        
        
        
        visited[x][y] = 0;
        
        
    }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        
        int srcx = 0;
        int srcy = 0;
        int n = mat.size();
        vector<string>ans;
        
        if(mat[0][0] == 0){
            return ans;
        }
        
        vector<vector<int>>visited = mat;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        
        solve(mat,visited,srcx,srcy,ans,n,path);
        return ans;
    }
};