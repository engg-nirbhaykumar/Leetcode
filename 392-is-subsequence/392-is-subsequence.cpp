class Solution {
public:
    bool isSubsequence(string s, string t) {
        //approach 1 using  string library
        // return t.find(s);
        //approach 2 using simple traversal 
        //traverse the subseq only if char is matching in both , 
        //if not matching move further in main string
        int n=s.length(),m=t.length();
        int j=0;//to traverse the subsequence
        for(int i=0;i<m;i++)
        {
            if(s[j]==t[i])//chars are matching
                j++;
        }
        return (j==n);//if subseq , all char matched and j must be ==len of subseq
    }
};