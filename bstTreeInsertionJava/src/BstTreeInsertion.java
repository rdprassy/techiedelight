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

public class BstTreeInsertion {


    public static void main(String args[]) {

        Node root = null;

        int keys[] = {20,24,16,18,29,27,13};

//        for(int t :keys){
//            root = insertIterative(t,root);
//
//        }

        for(int t :keys){
            root = insert(t,root);

        }

        inorder(root);


    }

    static Node newNode(int value){

        Node z = new Node(value);

        return z;

    }


    static Node insert(int t, Node root) {

        if(root == null){

            root = newNode(t);
            return root;
        }

        if(t < root.value ){
            root .left =insert(t, root.left);
        }
        else if(t>=root.value ){
            root .right =insert(t, root.right);
        }


        return root;

    }

    static Node insertIterative(int t, Node root) {

        if (root == null) {

            root = newNode(t);
            return root;
        }

        Node current = root;
        Node parent = null;


        while (current != null) {
            parent = current;


            if (t < current.value) {
                current = current.left;
            } else if (t >= current.value) {
                current = current.right;
            }

        }

        if(t < parent.value ){
            parent.left = newNode(t);

        }
        else {
            parent.right = newNode(t);
        }

        return root;




    }


    static void inorder(Node root) {

        if(root == null){
            return;
        }
        inorder(root.left);
        System.out.println(root.value + " ");
        inorder(root.right);

    }




}