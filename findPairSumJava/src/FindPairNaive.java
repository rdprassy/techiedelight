public class FindPairNaive {


    public static void findPair(int a[],int size, int pairsum){

        for(int i=0; i<size-1;i++){
            for(int j= i+1; j <size; j++){
                if (a[i]+a[j]== pairsum){
                    System.out.printf("pair found at %d and %d ",i,j);

                }

            }

        }


    }

    public static void main(String args[]){

        int a[] = {4,5,6,7,8};

        int length = a.length;

        findPair(a,length,12);







    }


}
