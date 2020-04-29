
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



public class BinaryTreeDeletion {

    public static void main(String args[]){

        Node z = null;
        z = new Node(10);
        z.left = new Node(11);
        z.right = new Node(12);
        z.left.left = new Node(13);
        z.left.right = new Node(14);
        z.right.left = new Node(15);
        z.right.right = new Node(16);

        deleteBinaryTree(z);

        z = null;

        //garbage collection takes care of things.



        System.out.println();




    }

    private static void deleteBinaryTree(Node z) {


        if(z==null){
            return;
        }

        deleteBinaryTree(z.left);
        deleteBinaryTree(z.left);



        z = null;
    }

}
