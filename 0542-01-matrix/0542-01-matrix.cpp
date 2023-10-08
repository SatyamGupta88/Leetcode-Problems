class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int m = mat[0].size();

	    queue<pair<pair<int,int>, int>> q; 
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == 0)
                {
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }
                else vis[i][j] = 0;
            }
        }
        int drow[] = {-1, 0, +1, 0}; 
	    int dcol[] = {0, +1, 0, -1};

        while(!q.empty())
        {
            int rw = q.front().first.first;
            int cl = q.front().first.second;
            int steps = q.front().second;
            ans[rw][cl] = steps;
            q.pop();

            for(int i=0;i<4;i++)
            {
                int nrw = rw + drow[i];
                int ncl = cl + dcol[i];

                if(nrw>=0 && nrw<n && ncl>=0 && ncl<m && vis[nrw][ncl]==0)
                {
                    vis[nrw][ncl] = 1;
                    q.push({{nrw,ncl},steps+1});
                }
            }
        }
        return ans;
    }
};