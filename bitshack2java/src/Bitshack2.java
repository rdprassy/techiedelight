public class Bitshack2 {

    public static void main(String args[]){

        int a =20;
        int k=3;
        //turn off kth bit
        int z = a & (~(1<<(k-1)));

        System.out.println(z);
        k= 2;
        // turn on kth bit
        z = a | ((1<<(k-1)));
        System.out.println(z);
        k=3;

        //check if the kth bit is set



        // toggle the kth bit
        z = a ^ ((1<<(k-1)));
        System.out.println(z);

        z = a & ((1<<(k-1)));

        if(z>0){
            System.out.println("kth bit is set");
        }
        else{
            System.out.println("kth bit is not set");
        }

    }
}
