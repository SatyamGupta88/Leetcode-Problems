class Solution {
public:
    vector<string>ans;
    void generateAllValid(int ob,int cb,string s)
    {
        if(ob==0 && cb==0)
        {
            ans.push_back(s);
            return ;
        }
        //pick opening braces 
        if(ob!=0)
        {
            s.push_back('(');
            generateAllValid(ob-1,cb,s);
            s.pop_back();
        }
        if(cb>ob)
        {
            s.push_back(')');
            generateAllValid(ob,cb-1,s);
        }
        
    }
    vector<string> generateParenthesis(int n) 
    {
        generateAllValid(n,n,"");
        return ans;   
    }
};