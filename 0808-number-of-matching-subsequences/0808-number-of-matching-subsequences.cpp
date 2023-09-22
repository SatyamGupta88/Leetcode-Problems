class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        int k=s.size();
        int cnt=0;
        unordered_map<string,int> mp;

        for(int i=0;i<words.size();i++) mp[words[i]]++;

        for(auto x:mp)
        {
            string str1=x.first;
            int str2size = str1.size();
            int strt1=0;
            int strt2=0;
            while(strt1<k && strt2<str2size)
            {
                if(s[strt1] == str1[strt2])
                {
                    strt1++;
                    strt2++;
                }
                else strt1++;
            }
            if(strt2==str2size)
            {
                cnt+=x.second;
            }
        }
        return cnt;
    }
};