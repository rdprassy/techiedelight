public class Bitshack4 {

    public static void main(String args[])
    {

        int a =6;
        int b =-6;

        int mask = a>>(Integer.SIZE*8)-1;
        System.out.println(mask);


        int mask1 = b>>(Integer.SIZE*8)-1;
        System.out.println(mask1);

        //finding absolute ensuring max flips the bits on xor

        System.out.println(((a+mask)^mask));
        System.out.println(((b+mask1)^mask1));

    }


}
