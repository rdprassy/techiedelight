public class BitsHack1 {

    public static void main(String args[]){

        int a =4;
        int b=6;



        if((a&1)==1){
            System.out.println("odd");
        } else
            System.out.println("even");

        a=-5;
        //2 integer opp

        if((a^b)>0){
            System.out.println("same sign");
        }
        else{
            System.out.println("different sign");
        }
        //add one to integer

        System.out.println(-~a);

        a=a^b;
        b=a^b;
        a=a^b;

        System.out.println(a);
        System.out.println(b);
    }
}
