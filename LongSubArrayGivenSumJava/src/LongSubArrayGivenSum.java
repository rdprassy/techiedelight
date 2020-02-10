import java.util.HashMap;
import java.util.Map;

public class LongSubArrayGivenSum {

    public static void main(String args[]) {


        int a[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
        int s = 8;
        int n = a.length;

        printIndices(a, n, s);

        printIndicesNaive(a, n, s);
    }


    static void printIndices(int a[], int n, int s) {

        //unordered_map<int, int> mp;

        Map<Integer,Integer> mp = new HashMap<Integer,Integer>();
        // mp[0] = -1;
        int endIndex = 0;
        int length = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];


            if (!mp.containsKey(sum)) {

                mp.put(sum,i);


            }

            if (mp.containsKey(sum - s) && length < i - mp.get(sum - s)) {

                length = i - mp.get(sum - s);
                endIndex = i;

            }

        }

        System.out.println("array is " + (endIndex - length + 1) + "and " +endIndex);

        //cout << "array is " << endIndex - length + 1 << "and " << endIndex << endl;

    }

    static void printIndicesNaive(int a[], int n, int s) {
        int sum;
        int length = 0;
        int endIndex = 0;
        for (int i = 0; i < n; i++) {
            sum = 0;
            for (int j = i; j < n; j++) {
                sum += a[j];


                if (sum == s && length < (j - i + 1)) {
                    length = j - i + 1;
                    endIndex = j;
                }
            }
        }

        System.out.println("array is " + (endIndex - length + 1) + "and " +endIndex);

//        cout << "array is " << endIndex - length + 1 << "and " << endIndex << endl;

    }
}