public class UniqueSolInMaze {

    public static final int N =4;
    public static int count=0;

    public static void main(String args[]){
        int a[][] ={
            { 1, 1, 1, 1 },
            { 1, 1, 0, 1 },
            { 0, 1, 0, 1 },
            { 1, 1, 1, 1 }
        };

        int b[][] = new int[N][N];

//        memset(b,0, sizeof(b));




        findUniquePaths(a,b,0,0,3,3);

       System.out.println(count);






    }

    static void findUniquePaths(int a[][], int b[][], int x, int y, int newx, int newy) {

        if(x== newx && y==newy){
           count++;
            return;


        }

        b[x][y]=1;

        if(issafe(a,x,y+1) && b[x][y+1]==0){
            findUniquePaths(a,b,x,y+1,newx,newy);
        }
        if(issafe(a,x+1,y) && b[x+1][y]==0){
            findUniquePaths(a,b,x+1,y,newx,newy);
        }
        if(issafe(a,x,y-1) && b[x][y-1]==0){
            findUniquePaths(a,b,x,y-1,newx,newy);
        }
        if(issafe(a,x-1,y) && b[x-1][y]==0){
            findUniquePaths(a,b,x-1,y,newx,newy);
        }

        b[x][y] =0;










    }

    static boolean issafe(int a[][], int x, int y) {


        if(x<0 || x>=N || y<0 || y>=N || a[x][y]==0)
            return false;

        return true;
    }

}
