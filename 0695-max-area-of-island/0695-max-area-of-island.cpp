class Solution {
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    void bfs(int i,int j,int& ans,std::vector<vector<int>>& grid,int n,int m){
            grid[i][j]=0;
            queue<pair<int,int>>q;
            q.push({i,j});
            
            while(!q.empty()){
                auto frt=q.front();
                q.pop();
                
                ans++;
                int x=frt.first, y=frt.second;
                
                for(int k=0;k<4;++k){
                    int di=x+dx[k];
                    int dj=y+dy[k];
                    if(di>=0 and dj>=0 and di<n and dj<m and grid[di][dj]){
                        grid[di][dj]=0;
                        q.push({di,dj});
                    }
                }
            }
    }
public:
    int maxAreaOfIsland(std::vector<vector<int>>& grid,int maxi=0) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int n=grid.size(), m=grid[0].size();
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]){
                    int tmp=0;  
                    bfs(i,j,tmp,grid,n,m);
                    maxi=max(maxi,tmp);
                }
            }
        }
        return maxi;
    }
};