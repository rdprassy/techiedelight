import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class FindZeroSumArrayPrintMultiMap {



    private static<K,V> void insert(Map<K, ArrayList<V>> mp,K k,V v){

        if(!mp.containsKey(k)){
            mp.put(k, new ArrayList<>());

        }

            mp.get(k).add(v);





    }


    public static void printArrays(int a[], int n) {

        Map<Integer, ArrayList<Integer>> mp = new HashMap<>();

        insert(mp,0,-1);

        int sum =0;
        for(int i=0;i<a.length;i++){

            sum+=a[i];
            if (mp.containsKey(sum)) {
                List<Integer> al = mp.get(sum);

                for(int l: al){

                    System.out.println("Subarray [" + (l + 1) + ".." +
                            i + "]");

                  //  System.out.printf("subarray found at %d and %d\n ",l+1,i);

                }
            }
                insert(mp,sum,i);





        }

        System.out.println(mp);






    }

    public static void main(String args[]) {
        int a[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
        int size = a.length;
        printArrays(a, size);
    }


}
