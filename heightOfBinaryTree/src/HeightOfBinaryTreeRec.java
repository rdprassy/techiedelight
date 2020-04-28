import java.util.ArrayDeque;
import java.util.Queue;

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

public class HeightOfBinaryTreeRec {

    public static void main(String args[]){

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
        z1.right.right.left = new Node(18);

        System.out.println(heightOfBinaryTree(z1));

        System.out.println(heightOfBinaryTreeIterative(z));


    }

    private static int heightOfBinaryTreeIterative(Node z) {

        int height =0;
        Queue<Node> q = new ArrayDeque<>();

        q.add(z);

        while(!q.isEmpty()){
            int size = q.size();
            while((size--)>0){

                Node z1= q.peek();
                q.poll();

                if(z1.left!=null){
                    q.add(z1.left);
                }

                if(z1.right!=null){
                    q.add(z1.right);
                }






            }

            height+=1;


        }




        return height;
    }

    private static int heightOfBinaryTree(Node z) {
        if(z == null){
            return 0;
        }

        return 1+Math.max(heightOfBinaryTree(z.left),heightOfBinaryTree(z.right));
    }
}
