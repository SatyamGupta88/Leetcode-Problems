class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        //priority help to store elements in sorted order in increasing order
        // we take priority queue to store the (count of no of ones , index of row)
      priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

      //traverse every row of matrix and count no of rows and store their index
      for(int i=0; i<mat.size(); i++)
       {
        int cur = 0;
        for(int j=0; j<mat[i].size(); j++) 
        {
          if(mat[i][j]==1)
            cur++;
        }
        pq.push({cur, i});
      } 
      //now traverse the priority Q till k times store its index into ansIndex 
      vector<int> ans;
      
      while(k--)
     {
        int top = pq.top().second;
        pq.pop();
        ans.push_back(top);
      }
      return ans;
    }
};