class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m=mat.size();
        int n=mat[0].size();
        
        if((m*n) != (r*c))
            return mat;
        
        vector<vector<int>> ans;
        vector<int> temp;
        int col =0;
        
        for(int i=0;i<m;i++)
        {
            
            for(int j =0;j<n;j++)
            {
                
                if(c == col)
                {
                    col = 0;
                    ans.push_back(temp);
                    temp.clear();
                }
                
               temp.push_back(mat[i][j]);
                col++;

            }
        }
        
        ans.push_back(temp);
        
        return ans;
        
        
    }
};