
import java.util.ArrayDeque;
import java.util.Deque;

class Node1{
    int value;

    Node1 left;
    Node1 right;

    Node1(int value){
        this.value = value;
        this.left = null;
        this.right = null;
    }

}

    class Pair<U,V>
{
public final U first;
public final V second;

private Pair(U first,V second){
        this.first = first;
        this.second = second;
        }


public static<U,V> Pair<U,V> of(U a, V b){
        return new Pair<>(a,b);
        }


        }







public class BinaryTreeIdenticalIterative {

    public static void main(String args[]) {

        System.out.println("See if things are working or not");

        Node1 z = null;
        z = new Node1(10);
        z.left = new Node1(11);
        z.right = new Node1(12);
        z.left.left = new Node1(13);
        z.left.right = new Node1(14);
        z.right.left = new Node1(15);
        z.right.right = new Node1(16);


        Node1 z1 = null;
        z1 = new Node1(10);
        z1.left = new Node1(11);
        z1.right = new Node1(12);
        z1.left.left = new Node1(13);
        z1.left.right = new Node1(14);
        z1.right.left = new Node1(15);
        z1.right.right = new Node1(16);

        if (isIdentical(z, z1)) {
            System.out.println("Both are identical");
        } else {
            System.out.println("Both are not identical");
        }
    }



    private static boolean isIdentical(Node1 z, Node1 z1) {

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

          // return (isIdentical(z.left, z1.left) && isIdentical(z.right, z1.right));

        Deque<Pair<Node1, Node1>> stack =new ArrayDeque<>();
        stack.push(Pair.of(z,z1));

        while(!stack.isEmpty()){

          z=  stack.peek().first;
          z1 = stack.peek().second;

          stack.poll();

          if(z.value!=z1.value){
              return false;
          }

          if(z.left!=null && z1.left!=null){
              stack.add(Pair.of(z.left,z1.left));

          }
          else if(z.left!=null || z1.left!=null){
              return false;
          }


            if(z.right!=null && z1.right!=null){
                stack.add(Pair.of(z.right,z1.right));

            }
            else if(z.right!=null || z1.right!=null){
                return false;
            }


        }
// if we reach here we are okay
       return true;

}
    }
