class Solution {
public:
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //  valid directions for traverse in 4 directions
        vector<pair<int,int>> directions={{1,0},{-1,0},{0,1},{0,-1}};
		
        int n=image.size();
        int m=image[0].size();
        
       int oldcolor=image[sr][sc];
       //if we get already present new color then simply return image
        if(image[sr][sc]==newColor)   
            return image;
        
        // standard bfs
		// assigning newColor to image will act as visited for that vertex 
		// so we don't need any visited array here
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc]=newColor;
        
        while(!q.empty())
        {
            auto top=q.front();
            q.pop();

            //traverse  in directions
            for(auto dir:directions)
            {
                int i=top.first+dir.first;
                int j=top.second+dir.second;
                //check boundary case
                if(isvalid(i,j,n,m) && image[i][j]==oldcolor)
                {
                    q.push({i,j});           
                    image[i][j]=newColor;
                }     
            }
        }
        return image;
        
    }
    
    bool isvalid(int i,int j,int n,int m)
    {
        if(i>=n || j>=m || i<0 || j<0)
            return 0;
        else
            return 1;
        
    }
};