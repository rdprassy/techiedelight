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

public class PostOrderJava {


    public static void main(String args[]) {

        Node z = null;
        z = new Node(10);
        z.left = new Node(11);
        z.right = new Node(12);
        z.left.left = new Node(13);
        z.left.right = new Node(14);
        z.right.left = new Node(15);
        z.right.right = new Node(16);


        postorderRec(z);
//        preorderiterOpti(z);

        System.out.println();

        postorderIterative(z);

    }

    private static void postorderRec(Node z) {


        if (z == null) {
            return;
        }


        postorderRec(z.left);
        postorderRec(z.right);
        System.out.print(z.value + " ");
    }



    static void postorderIterative(Node z) {

        if (z == null)
            return;

        Stack<Node> st = new Stack<>();
        //st.push(z);
        Node current = z;
        st.push(current);
        Stack<Node > out = new Stack<>();

        while (!st.empty()) {

            current = st.peek();
            st.pop();
            out.push(current);
            if (current.left!= null)
                st.push(current.left);

            if (current.right!= null)
                st.push(current.right);

        }

        while (!out.empty()) {
            current = out.peek();
            out.pop();
            System.out.print(current.value+" ");


        }
    }




}