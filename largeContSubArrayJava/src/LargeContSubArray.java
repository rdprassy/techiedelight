import java.util.*;
import java.lang.Math;

public class LargeContSubArray {

    public static void main (String args[]){


        int a[]= {2,0,2,1,4,3,1,0};
        int n = a.length;

        printIndices(a,n);
    }

    static void printIndices(int a[], int n) {

        int l=1;
        int min_val,max_val;
        int start =0;
        int end =0;


        for(int i=0;i<n;i++){

            min_val = a[i];
            max_val = a[i];
            for(int j=i+1;j<n;j++){

                min_val = Math.min (min_val,a[j]);
                max_val = Math.max(max_val,a[j]);

                //check if the array is contigous
                if(isContigous(a,i,j,min_val,max_val)){

                    if (l<(j-i+1)){
                        l = j-i+1;
                        start =i;
                        end =j;
                    }



                }

            }



        }

        System.out.printf("subarray at %d and %d",start,end);

    }


    static boolean isContigous(int a[], int i, int j, int min_val, int max_val) {
        if((max_val-min_val)!=(j-i)){
            return false;
        }

      boolean visit[] = new boolean[j-i+1];

        for(int k = i;k<=j;k++){
            if(visit[a[k]-min_val]){
                return false;

            }
            visit[a[k]-min_val] = true;

        }

        return true;




    }



}
