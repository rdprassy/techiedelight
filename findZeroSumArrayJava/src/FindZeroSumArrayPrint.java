public class FindZeroSumArrayPrint {

    public static void main(String args[]){

        int a[] = {4,2,-6,3,-3,5};
        int size = a.length;
        printArrays(a,size);



    }


    static void printArrays(int a[], int n) {

        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum+=a[j];
                if(sum == 0){
                    System.out.printf("subarray found at %d and %d \n ",i,j);

                }

            }


        }

    }
}
