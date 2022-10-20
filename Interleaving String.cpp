class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        vector<int>cur(s2.size()+1,0),prev(s2.size()+1,0);
        int i,j,k;
        if(s3.size()!=s1.size()+s2.size())
        {
            return false;
        }
        for(i=s1.size();i>=0;i--)
        {
            for(j=s2.size();j>=0;j--)
            {
                k=i+j;
                if(i==s1.size()&&j==s2.size())
                {
                    cur[j]=1;
                }
                else if(s3[k]==s2[j]&&s3[k]==s1[i])
                {
                    cur[j]= prev[j]||cur[j+1];
                }
                else if(s1[i]==s3[k])
                {
                    cur[j]= prev[j];
                }
                else if(s3[k]==s2[j])
                {
                    cur[j]= cur[j+1];
                }
                else{
                    cur[j]= false;
                }  
            }
            prev=cur;
        }
        return cur[0];
    }
};
