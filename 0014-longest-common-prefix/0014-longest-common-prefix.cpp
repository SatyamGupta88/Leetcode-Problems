class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(),strs.end());
        string s1 = strs[0];
        string s2= strs[strs.size()-1];
        int i=0,j=0;
        string ans="";
        while(i<s1.size() && j<s2.size())
        {
            if(s1[i]!=s2[j]) break;
            else  ans+=s1[i];
            i++;
            j++;
        }
        return ans;
    }
};