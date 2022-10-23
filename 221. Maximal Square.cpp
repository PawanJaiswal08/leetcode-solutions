class Solution {
public:
    int maximalSquare(vector<vector<char>> matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        int top[n][m];
        for(int i=0;i<m;i++)
        {
            top[0][i]=matrix[0][i]-'0';
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='0')
                {
                    top[i][j]=0;
                }
                else
                {
                    top[i][j]=1+top[i-1][j];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                
                top[i][j]+=top[i][j-1];
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int k=1;k<=min(i+1,j+1);k++)
                {
                    int r=0;
                    r+=top[i][j];
                    if(i-k>=0)
                        r-=top[i-k][j];
                    if(j-k>=0)
                        r-=top[i][j-k];
                    if(j-k>=0&&i-k>=0)
                        r+=top[i-k][j-k];
                    if(r==k*k)
                    ans=max(ans,k*k);
                }
            }
        }
        return ans;
    }
};
