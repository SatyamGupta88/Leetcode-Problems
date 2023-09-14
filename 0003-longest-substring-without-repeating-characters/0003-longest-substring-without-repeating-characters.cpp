class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n = s.size();
        int maxl=0;
        int i=0,j=0;
        set<char> st;
        while(j<n)
        {
            if(st.find(s[j])==st.end())
            {
                st.insert(s[j]);
                maxl = max(maxl,j-i+1);
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxl;
    }
};