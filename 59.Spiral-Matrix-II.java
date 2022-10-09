class Solution {
    public int[][] generateMatrix(int n) {
        int[][] ans = new int[n][n];
        char direction = 'r';
        int x = 0, y = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                ans[i][j] = 0;
            }
        }
        
        for(int i=1; i<=n*n; i++){
            ans[x][y]=i;
            
            switch(direction){
                case 'r':
                    if(y==n-1 || ans[x][y+1]!=0){
                        direction = 'd';
                        x++;
                    }else{
                        y++;
                    }
                    break;
                case 'd':
                    if(x==n-1 || ans[x+1][y]!=0){
                        direction = 'l';
                        y--;
                    }else{
                        x++;
                    }
                    break;
                case 'l':
                    if(y==0 || ans[x][y-1]!=0){
                        direction = 'u';
                        x--;
                    }else{
                        y--;
                    }
                    break;
                case 'u':
                    if(x==0 || ans[x-1][y]!=0){
                        direction = 'r';
                        y++;
                    }else{
                        x--;
                    }
                    break;
                default:
                    
            }
        }
        
        return ans;
        
        
    }
}