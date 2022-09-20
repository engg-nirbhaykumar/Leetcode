class Solution {
public:
    bool isSubsequence(string s, string t) {
        // return t.find(s);
        int n=s.length(),m=t.length();
        int j=0;
        for(int i=0;i<m;i++)
        {
            if(s[j]==t[i])
                j++;
        }
        return (j==n);
    }
};