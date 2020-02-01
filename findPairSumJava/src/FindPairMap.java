import java.util.HashMap;
import java.util.Map;

public class FindPairMap {

    public static void main(String args[]){

        int a[]= {4,5,6,7,8};

        findPairMap(a,12);



    }

    public static void findPairMap(int[] a, int pairsum) {

        Map<Integer,Integer> mp = new HashMap<>();


        for(int i=0;i<a.length;i++){

            if(mp.containsKey(pairsum-a[i])){

                int j = mp.get(pairsum-a[i]);

                System.out.println("the index where the thing will be found is %d and %d"+i+""+j);
                return;

            }

            else{
                mp.put(a[i],i);
            }
        }



    }

}
