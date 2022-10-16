class UnionFind {
    private int[] parents;
    private int circleCount; 
    
    public UnionFind(int n) {
        parents = new int[n];
        for (int i = 0; i < n; i++) {
            parents[i] = i;
        }
    }
    
    public int find(int x) {
        if (parents[x] == x) {
            return x;
        }
        
        return parents[x] = find(parents[x]);
    }
    
    public void union(int a, int b) {
        int groupA = find(a);
        int groupB = find(b);
        
        if (groupA != groupB) {
            parents[groupA] = groupB;
            circleCount--;
        }        
    }
    
    public void setCircleCount(int circleCount) {
        this.circleCount = circleCount;
    }
    
    public int getCircleCount() {
        return this.circleCount;    
    }    
}

class Solution {
    public int findCircleNum(int[][] M) {
        if (M.length == 0 || M[0].length == 0) {
            return 0;
        }
        
        int m = M.length;
        int n = M[0].length;
        
        UnionFind unionFind = new UnionFind(m * n);
        unionFind.setCircleCount(m);
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (M[i][j] == 1 && i != j) {
                    unionFind.union(i, j);        
                }                
            }            
        }
        
        return unionFind.getCircleCount();
    }
}
