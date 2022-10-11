class Solution {
    public void setZeroes(int[][] matrix) {
        int row=matrix.length;
        int col=matrix[0].length;
        int count=0;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]!=0)
                {
                    count++;
                }
            }
        }
        
        if(count==row*col)
        {
            return;
        }
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                  for(int f=i-1;f>=0;f--)
                  {
                     if(matrix[f][j]!=0)
                       matrix[f][j]=-1;
                  }
                    for(int f=i+1;f<row;f++)
                  {
                        if(matrix[f][j]!=0)
                      matrix[f][j]=-1;
                  }
                    for(int f=j-1;f>=0;f--)
                  {if(matrix[i][f]!=0)
                      matrix[i][f]=-1;
                  }
                    for(int f=j+1;f<col;f++)
                  {  if(matrix[i][f]!=0)
                      matrix[i][f]=-1;
                  }
                }
            }
        }
        
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        return;
    }
}
