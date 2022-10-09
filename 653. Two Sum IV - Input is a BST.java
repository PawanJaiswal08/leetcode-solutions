class Solution {
   //approach using inorder traversal 
    List<Integer> list = new ArrayList<Integer>();
    public List<Integer> inorder(TreeNode root, List<Integer> list){
        if(root==null) return list;
        inorder(root.left,list);
        list.add(root.val);
        inorder(root.right,list);
        return list;
    }
    public boolean findTarget(TreeNode root, int k) {
        inorder(root,list);
        int left = 0;
        int right = list.size()-1;
        while(left<right){
            if(list.get(left)+list.get(right)==k){
                return true;
            }else if(list.get(left)+list.get(right)>k){
                right--;
            }else{
                left++;
            }
        }
        return false;
    }
}
