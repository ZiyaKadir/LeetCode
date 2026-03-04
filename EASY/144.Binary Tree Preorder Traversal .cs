/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {

    public void PreorderTreaverselHelper(TreeNode root, IList<int> list){
        if(root == null) return;
        
        list.Add(root.val);
        PreorderTreaverselHelper(root.left, list);
        PreorderTreaverselHelper(root.right, list);

    }
    public IList<int> PreorderTraversal(TreeNode root) {
        IList<int> result = new List<int>();

        PreorderTreaverselHelper(root, result);

        return result;
    }
}