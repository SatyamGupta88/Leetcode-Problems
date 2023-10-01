class Solution {
public:
    string reverseWords(string s) 
    {
        int n = s.size();
        string ans="";
        string temp="";

        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                ans+=" ";
                reverse(temp.begin(),temp.end());
                ans+=temp;
                temp="";
            }
            else
            {
                temp+=s[i];
            }
        }
        ans+=" ";
        reverse(temp.begin(),temp.end());
        ans+=temp;
        string output="";
        for(int i=1;i<ans.size();i++) output.push_back(ans[i]);

        return output;
    }
};