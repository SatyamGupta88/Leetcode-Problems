class Solution {
public:
    void solve(int rw,int cl,vector<vector<int>>& matrix)
    {
        // traverse the column which means same row 
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[rw][j] == 0) continue;
            else  matrix[rw][j] = 0;
        }
        // traverse the row which means same col 
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][cl] == 0) continue;
            else  matrix[i][cl] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>> temp;
        // traverse matrix and store the rw,cl of cell which having 0 in it.

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    temp.push_back({i,j});
                }
            }
        }
        // now traverse the temp array and make te whole row and col filled with 0

        for(int i=0;i<temp.size();i++)
        {
            int rw = temp[i].first;
            int cl = temp[i].second;
            solve(rw,cl,matrix);
        }   
    }
};