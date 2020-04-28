
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

public class BinaryTreeIdentical {

    public static void main(String args[]) {

        System.out.println("See if things are working or not");

        Node z = null;
        z = new Node(10);
        z.left = new Node(11);
        z.right = new Node(12);
        z.left.left = new Node(13);
        z.left.right = new Node(14);
        z.right.left = new Node(15);
        z.right.right = new Node(16);


        Node z1 = null;
        z1 = new Node(10);
        z1.left = new Node(11);
        z1.right = new Node(12);
        z1.left.left = new Node(13);
        z1.left.right = new Node(14);
        z1.right.left = new Node(15);
        z1.right.right = new Node(16);

        if (isIdentical(z, z1)) {
            System.out.println("Both are identical");
        } else {
            System.out.println("Both are not identical");
        }
    }



    private static boolean isIdentical(Node z, Node z1) {

        if(z==null && z1==null){

           return true;
        } else if (z == null) {
            return false;
        }
        else if (z1== null){
            return false;
        }

        if(z.value != z1.value){
            return false;
        }

            return (isIdentical(z.left, z1.left) && isIdentical(z.right, z1.right));


      //  return false;

}
    }
