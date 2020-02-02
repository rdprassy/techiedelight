import java.util.HashSet;
import java.util.Set;

public class FindZeroSumArray {






    public static void main(String args[]){

    int a[] = {4,5,6,7,-22};



    boolean b = isArrayZeroSum(a);
        System.out.println(b);





    }

    private static boolean isArrayZeroSum(int[] a) {

        Set<Integer> s = new HashSet<>();
        s.add(0);




        int sum =0;
        for(int i=0;i<a.length;i++){
            sum+=a[i];


            if(s.contains(sum)){

                return true;
            }

            s.add(sum);


        }

        return false;
    }
}
