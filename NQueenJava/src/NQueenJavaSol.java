import java.util.Arrays;

public class NQueenJavaSol {

    public static final int N = 8;

    public static void main(String args[]){


        char[][]a = new char[N][N];

        for(int i=0;i<N;i++){
            Arrays.fill(a[i],'-');
        }

        nQueen(a,0);


    }


    private static void nQueen(char a[][], int r) {



        if(r==N){
            for(int i=0;i<N; i++) {
                System.out.print("\n");
                for(int j=0;j<N;j++){
                  System.out.print(a[i][j]);


                }
            }

        }

        for(int i =0;i<N;i++){

            if(isSafe(a,r,i)){

                a[r][i] = 'Q';
                nQueen(a,r+1);


                a[r][i]= '-';


            }
        }



    }


    public static boolean isSafe(char a[][], int r, int c) {

        //checking if the column is ok

        for(int i=0;i<r;i++){
            if(a[i][c] == 'Q'){
                return false;
            }
        }

        //checking if the upper diagonal  \ is ok

        for(int i=r,j=c;i>=0 &&j>=0;i--,j--){
            if(a[i][j] == 'Q'){
                return false;
            }
        }


        // check if the diagonal '/' is ok

        for(int i=r,j=c;i>=0 &&j<N;i--,j++){
            if(a[i][j] == 'Q'){
                return false;
            }
        }



        return true;
    }

}









