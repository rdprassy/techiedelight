import java.util.Arrays;

public class CombiNewDigits {

    public static void main(String args[]){

        int N =7;
        int a[]= new int[2*N];

        Arrays.fill(a,-1);

        printcombination(a,1,N);


    }



    static void printcombination(int a[], int k, int N) {
        if(k>N){
            for(int j:a){
                System.out.print(j+" ");
            }
           System.out.println();
            return;
        }

        for(int i=0;i<2*N;i++){

            if(a[i]==-1 && (i+k+1)<(2*N) && a[i+k+1]==-1 ) {

                a[i] = k;
                a[i + k + 1] = k;


                printcombination(a, k + 1, N);
                a[i] = -1;
                a[i + k + 1] = -1;

            }
        }




    }
}