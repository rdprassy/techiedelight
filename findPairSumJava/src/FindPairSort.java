import java.util.Arrays;

public class FindPairSort {


    public static void main(String args[]){


        int arr[] = {4,5,6,7,8};
        findPairSum (arr,arr.length,12);


    }

    private static void findPairSum(int[] arr, int length, int pairsum) {

        Arrays.sort(arr);

        int low =0;
        int high = length -1;

        while(low<high){
            if (arr[low]+arr[high]== pairsum){

                System.out.printf("found pair %d and %d",low,high);
                return;


            }

            if(arr[low]+arr[high] < pairsum){
                low++;
            }
            else{

            }high--;



        }


    }





}
