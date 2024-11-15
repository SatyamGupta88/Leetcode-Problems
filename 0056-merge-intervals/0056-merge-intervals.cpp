class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int n = intervals.size();

        sort(intervals.begin(),intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]);

        int firstVal = output[0][0];
        int secVal = output[0][1];

        int index = 0;

        for(int i=0;i<n;i++)
        {
            if(secVal>=intervals[i][0])
            {
                output[index][0] = min(firstVal,intervals[i][0]);
                output[index][1] = max(secVal,intervals[i][1]);
                firstVal = output[index][0];
                secVal = output[index][1];
            }
            else
            {
                vector<int>temp;
                temp.push_back(intervals[i][0]);
                temp.push_back(intervals[i][1]);
                index++;
                output.push_back(temp);
                firstVal = temp[0];
                secVal =temp[1];
            }
        }
        return output;
    }
};