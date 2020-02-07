import static java.lang.StrictMath.abs;

public class FindDupArrayJava {

    static void findDup(int a[], int n) {

        //find given sum



        // cout<<n<<endl;

        int sum =0;
        for(int i=0;i<n;i++) {
            sum += a[i];
        }


        int actual=(n*(n-1))/2;
        System.out.println(sum-actual);
       // cout<<sum-actual;


    }


    static void findDup1(int a[], int n) {

        Boolean[] visit = new Boolean[n+1];

        for(int i=0;i<n+1;i++)
            visit[i]= false;

        for(int i=0; i<n;i++){

            if(visit[a[i]]){
               System.out.println(a[i]);
            }
            else{
                visit[a[i]] = true;
            }
        }


    }


    static void findDup2(int a[], int n){

        for(int i=0;i<n;i++){

            int val = abs(a[i]);
            if(a[val-1] >=0){
                a[val-1] = -a[val-1];
            }
            else{
                //cout<<abs(a[i]);
                System.out.println(val);
            }


        }
    }

    static void findDup3(int a[], int n){
        int xor1 = 0;
        for(int i=0;i<n;i++){
            xor1^=a[i];
//        cout<<xor1<<endl;

        }

        for(int i=1;i<=n-1;i++){
            xor1^=i;
//        cout<<xor1<<endl;


        }
        System.out.println(xor1);
       // cout<<xor1<<endl;
    }



    public static void main(String args[]){

        int a[] = {1,2,4,4,3};
        int n = a.length;
        findDup(a,n);
        findDup1(a,n);

        findDup2(a,n);
        int b[] = {1,2,4,4,3};
        findDup3(b,n);
    }
}
