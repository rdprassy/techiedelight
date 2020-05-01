import java.util.*;
class Node{
    int value;

    Node left;
    Node right;

    Node(int value){
        this.value = value;
        this.left = null;
        this.right = null;
    }

}

public class PreOrderTraversalJava {


    public static void main(String args[]) {

        Node z = null;
        z = new Node(10);
        z.left = new Node(11);
        z.right = new Node(12);
        z.left.left = new Node(13);
        z.left.right = new Node(14);
        z.right.left = new Node(15);
        z.right.right = new Node(16);


        preorderRec(z);
        preorderIter(z);
//        preorderiterOpti(z);

        preorderIterative(z);

    }

    private static void preorderRec(Node z) {


        if (z == null) {
            return;
        }
        System.out.print(z.value + " ");

        preorderRec(z.left);
        preorderRec(z.right);
    }


    static void preorderIter(Node z) {

        if (z == null)
            return;

        Stack<Node> st = new Stack<>();
        //st.push(z);
        Node current = z;
        st.push(current);

        while (!st.empty()) {


            current = st.peek();
            st.pop();
            System.out.print(current.value + " ");
            if (current.right != null)
                st.push(current.right);

            if (current.left != null)
                st.push(current.left);


        }


    }





    // Iterative function to perform pre-order traversal of the tree
    public static void preorderIterative(Node root)
    {
        // return if tree is empty
        if (root == null) {
            return;
        }

        // create an empty stack and push root node
        Stack<Node> stack = new Stack();
        stack.push(root);

        // start from root node (set current node to root node)
        Node curr = root;

        // run till stack is not empty
        while (!stack.empty())
        {
            // if current node is not null, print it and push its right
            // child to the stack and move to its left child
            if (curr != null)
            {
                System.out.print(curr.value + " ");

                if (curr.right != null) {
                    stack.push(curr.right);
                }

                curr = curr.left;
            }
            // else if current node is null, we pop a node from the stack
            // set current node to the popped node
            else {
                curr = stack.pop();
            }
        }
    }
}