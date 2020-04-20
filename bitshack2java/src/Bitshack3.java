

public class Bitshack3 {

    public static int log(int x, int base){
        return(int)(Math.log(x)/Math.log(base));
    }

    public static void main(String args[]){
        //checking if a given number is a power of 2 or not.

        int n = 32;

        if((n&(n-1))!=0){
            System.out.println("not a power of 2");
        }
        else{
            System.out.println("its a power of 2");
        }


//find postion of the rightmost bit

        int z = (n&(n-1))^n;

        System.out.println(log(z,2)+1);

//one more way doing the same

        System.out.println(log(n&(-n),2)+1);
//position of the only set bit

        if((n&(n-1))==0){

            System.out.println(log(n,2)+1);



        }else{
            System.out.println("this is not how you deal things.");
        }

//parity of things.

        boolean parity = false;
        while(n!=0){
            parity=!parity;
            n=n&(n-1);

        }

        if(parity){
            System.out.println("odd parity");
        }
        else{
            System.out.println("even parity");
        }
        n =32;
        parity = false;

        while(n!=0){
            if((n&1)!=0){
                parity = !parity;
            }
            n=n>>1;
        }

        if(parity){
            System.out.println("odd parity");
        }
        else{
            System.out.println("even parity");
        }

    }
}

