class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> pascalT(numRows);

        for(int i=0;i<numRows;i++)
        {
            pascalT[i].resize(i+1);

            pascalT[i][0] = 1;

            for(int j=1;j<i;j++)
            {
                pascalT[i][j] = pascalT[i-1][j-1] + pascalT[i-1][j];
            }
            pascalT[i][i] = 1;
        }
        return pascalT;
    }
};