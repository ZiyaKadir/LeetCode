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

    public void PostOrderTraversalHelper(TreeNode root, IList<int> list){
        if(root == null){
            return;
        }

        PostOrderTraversalHelper(root.left, list);
        PostOrderTraversalHelper(root.right, list);

        list.Add(root.val);
    }

    public IList<int> PostorderTraversal(TreeNode root) {
        IList<int> list = new List<int>();

        PostOrderTraversalHelper(root, list);

        return list;
    }
}