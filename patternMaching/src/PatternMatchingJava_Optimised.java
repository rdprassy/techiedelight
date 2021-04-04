import java.util.HashMap;
import java.util.Map;

public class PatternMatchingJava_Optimised {

    public static void main (String args[]){


        System.out.println(isMatch("XYXZZXY", "X***Y"));    // true
        System.out.println(isMatch("XYXZZXY", "X*ZZ??"));   // true
        System.out.println(isMatch("XYXZZXY", "*X*X?"));    // true
        System.out.println(isMatch("XYXZZXY", "X***X"));    // false
        System.out.println(isMatch("XYXZZXY", "*"));    // true
        System.out.println(isMatch("", "X"));

    }

    private static boolean isMatch(String str, String pattern) {

        Map<String, Boolean> lookup = new HashMap<>();

        return isMatch(str,0,pattern,0, lookup);

    }

    private static boolean isMatch(String str, int n, String pattern, int m, Map<String,Boolean> lookup) {

        //Create a lookup table


        String key = n+"|"+ m;

        if (lookup.containsKey(key)){
            return lookup.get(key);
        }







        if(pattern.length() == 0){
            return true;
        }


        if(m== pattern.length()){
            lookup.put(key, (n == str.length()));
            return n == str.length();
        }


        if(n== str.length()){

            for(int i=m;i<pattern.length();i++){
                if(pattern.charAt(i)!='*'){
                    lookup.put(key,false);
                    return false;
                }
            }

            lookup.put(key,true);
            return true;

        }

        if(pattern.charAt(m)=='?' || pattern.charAt(m) == str.charAt(n)){

            return isMatch(str,n+1, pattern, m+1,lookup);
        }

        if(pattern.charAt(m) == '*'){

            return isMatch(str,n+1,pattern,m,lookup) || isMatch(str,n,pattern,m+1, lookup);
        }

        return false;
    }


}
