import java.util.HashMap;
import java.util.Map;

public class MaxLenSubArrayEqual0and1s {

    public static void main(String args[]) {

        int a[] = {0, 0, 1, 0, 1, 0, 0};

        // int a[] = {0,0,0,0,0,0,0};

        int n = a.length;

        printSubArray(a, n);

        printSubArrayOrder(a, n);


    }






    static void printSubArray(int a[], int n) {
        int endIndex = 0;
        int length = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                // subarrays ending with j
                sum += ((a[j] == 0) ? -1 : a[j]);

                if (sum == 0) {
                    if (length < (j - i + 1)) {
                        endIndex = j;
                        length = j - i + 1;
                    }

                }


            }
        }

        if (length == 0) {
            System.out.println("no subarray with zero sum found");
        } else {
           System.out.println("subarray with indexes " + (endIndex - length + 1) +"and " +endIndex);
        }

    }

    static void printSubArrayOrder(int a[], int n) {

       Map<Integer, Integer> mp= new HashMap<>();

        int endIndex = -1;
        int length = 0;
        int sum = 0;
        mp.put(0,-1);

        for (int i = 0; i < n; i++) {

            sum += ((a[i] == 0) ? -1 : a[i]);

            if (mp.containsKey(sum) ) {

                if (length < (i - mp.get(sum))) {
                    length = (i - mp.get(sum));
                    endIndex = i;
                }


            } else {
                mp.put(sum,i);
            }

        }

        if (endIndex == -1) {
            System.out.println("no subarray with zero sum found");
        } else {
            System.out.println("subarray with indexes " + (endIndex - length + 1) +"and " +endIndex);
        }
    }
}