import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

class Node{
    private int x;
    private int y;

    public Node(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Node node = (Node) o;
        return getX() == node.getX() &&
                getY() == node.getY();
    }

    @Override
    public int hashCode() {
        return Objects.hash(getX(), getY());
    }
}

public class MazePathPrint {

    public static final int N =10;

    public static int a1[] = {0, 1, 0, -1};
    public static int b1[]  ={ 1,0,-1,0};


    public static void main(String args[]){

        int a[][] =
        {
            { 7, 1, 3, 5, 3, 6, 1, 1, 7, 5 },
            { 2, 3, 6, 1, 1, 6, 6, 6, 1, 2 },
            { 6, 1, 7, 2, 1, 4, 7, 6, 6, 2 },
            { 6, 6, 7, 1, 3, 3, 5, 1, 3, 4 },
            { 5, 5, 6, 1, 5, 4, 6, 1, 7, 4 },
            { 3, 5, 5, 2, 7, 5, 3, 4, 3, 6 },
            { 4, 1, 4, 3, 6, 4, 5, 3, 2, 6 },
            { 4, 4, 1, 7, 4, 3, 3, 1, 4, 2 },
            { 4, 4, 5, 1, 5, 2, 3, 5, 3, 5 },
            { 3, 6, 3, 5, 2, 2, 6, 4, 2, 1 }
        };

        List<Node> b = new ArrayList<>();
        printPaths(a,b,0,0,N-1,N-1);
    }



    static boolean notRepeated(List<Node> b, int x, int y) {

        if(!b.contains(new Node(x,y)))
            return true;
        return false;
    }

    static boolean issafe(int x, int y){
        if(x<0 || x>=N || y<0 || y>=N)
            return false;
        return true;
    }


    static void printPaths(int[][] a , List<Node> b, int x, int y, int startx, int starty) {
        Node z = new Node(x,y);
        b.add(z);

        if(x==startx && y==starty){
            printList(b);
            return;
        }



        if(issafe(x,y+b1[0]*a[x][y]) && notRepeated(b,x,y+b1[0]*a[x][y])){
            printPaths(a,b,x,y+b1[0]*a[x][y],startx,starty);
        }

        if(issafe(x+a1[1]*a[x][y],y) && notRepeated(b,x+a1[1]*a[x][y],y)){
            printPaths(a,b,x+a1[1]*a[x][y],y,startx,starty);
        }

        if(issafe(x,y+b1[2]*a[x][y]) && notRepeated(b,x,y+b1[2]*a[x][y])){
            printPaths(a,b,x,y+b1[2]*a[x][y],startx,starty);
        }

        if(issafe(x+a1[3]*a[x][y],y) && notRepeated(b,x+a1[3]*a[x][y],y)){
            printPaths(a,b,x+a1[3]*a[x][y],y,startx,starty);
        }

        b.remove(b.size()-1);
        return;
    }

    private static void printList(List<Node> b) {

        for(Node n:b){
            System.out.println("("+n.getX()+","+n.getY()+")");

        }
    }
}


















