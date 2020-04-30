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


public class InorderTraversalJava {


    public static void main(String args[]) {


        Node z = null;
        z = new Node(10);
        z.left = new Node(11);
        z.right = new Node(12);
        z.left.left = new Node(13);
        z.left.right = new Node(14);
        z.right.left = new Node(15);
        z.right.right = new Node(16);

        inorderrec(z);
        inorderiter(z);


    }

    private static void inorderiter(Node z) {

        if(z== null)
            return;

        Stack<Node> st = new Stack<>();
       // st.push(z);
        Node current = z;

        while(!st.empty() || current!= null){

            if(current!= null){

                st.push(current);
                current = current.left;

            }
            else{
                current = st.peek();
                st.pop();
                System.out.print(current.value+" ");
                current = current.right;
            }




        }
    }

    private static void inorderrec(Node z) {

        if(z == null){
            return;
        }

        inorderrec(z.left);
        System.out.print(z.value + " ");
        inorderrec(z.right);

    }

}
