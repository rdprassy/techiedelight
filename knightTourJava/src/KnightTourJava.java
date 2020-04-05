import java.util.Arrays;

public class KnightTourJava {

    public static final int N = 5;

    public static final int xo[] = { 2, 1, -1, -2, -2, -1,  1,  2 , 2 };


    public static final int yo[] =  { 1, 2,  2,  1, -1, -2, -2, -1, 1 };

    public static void main(String args[])
    {


        int a[][] = new int[N][N];

    /*    for(int i=0;i<N;i++)
        Arrays.fill(a[i],0);*/

        int pos =1;

        knight(a,0,0,pos);




    }


    public static void knight(int a[][], int x, int y, int pos) {

        // goal is to first visit it
        a[x][y]=pos;

        if(pos >= N*N){
            print(a);

            a[x][y]=0;
            return;
        }





        for(int k=0;k<8;k++) {

            int newx = x+xo[k];

            int newy = y+yo[k];


            if (issafe(newx,newy) && a[newx][newy] == 0){

                knight(a,newx,newy,pos+1);


            }
        }

        a[x][y] = 0;





    }

    static boolean issafe(int newx, int newy) {

        if(newx<0 || newx>=N || newy<0 || newy>=N){
            return false;

        }
        return true;
    }

    static void print(int a[][]) {

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
              System.out.print(a[i][j]+" ");
            }

           System.out.println();
        }

    }
}
