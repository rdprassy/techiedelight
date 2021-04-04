public class PatternMatchingJava {

    public static void main (String args[]){


        //exponential because we are using the recursive call stack formulating all possible ways

        System.out.println(isMatch("XYXZZXY", "X***Y"));    // true
        System.out.println(isMatch("XYXZZXY", "X*ZZ??"));   // true
        System.out.println(isMatch("XYXZZXY", "*X*X?"));    // true
        System.out.println(isMatch("XYXZZXY", "X***X"));    // false
        System.out.println(isMatch("XYXZZXY", "*"));    // true


    }

    private static boolean isMatch(String str, String pattern) {

        return isMatch(str,0,pattern,0);

    }

    private static boolean isMatch(String str, int n, String pattern, int m) {

        if(pattern.length() == 0){
            return true;
        }


        if(m== pattern.length()){
            return n == str.length();
        }


        if(n== str.length()){

            for(int i=m;i<pattern.length();i++){
                if(pattern.charAt(i)!='*'){
                    return false;
                }
            }

            return true;

        }

        if(pattern.charAt(m)=='?' || pattern.charAt(m) == str.charAt(n)){

            return isMatch(str,n+1, pattern, m+1);
        }

        if(pattern.charAt(m) == '*'){

            return isMatch(str,n+1,pattern,m) || isMatch(str,n,pattern,m+1);
        }

        return false;
    }


}
