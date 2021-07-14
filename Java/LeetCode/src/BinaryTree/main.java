package BinaryTree;
import BinaryTree.BinarySearchTree;

public class main {

	public static void main(String[] args)
    {
        BinarySearchTree tree = new BinarySearchTree();
 
        /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
        int[] arr = {10,5,15,3,7,18};
        for(int i : arr) {
        	tree.insert(i);
        }
        // print inorder traversal of the BST
        
        System.out.println(rangeSumBST(tree.root, 7, 15));
        
    }
	
	public static int rangeSumBST(Node root, int low, int high) {
        return rangeSumBSTHelper(root, low,high, 0);
    }
    
    public static int rangeSumBSTHelper(Node root, int low, int high, int sum){
        if(root == null){
   
            return sum;
        } 
        
        if(root.key >= low && root.key <= high) {
            sum += root.key;
            System.out.println("root val: " + sum);
        }
        
        sum = rangeSumBSTHelper(root.left, low, high, sum);
        sum = rangeSumBSTHelper(root.right, low, high, sum);
        
        
        return sum;
    }

}
