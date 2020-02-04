import java.util.Arrays;

public class SortBinaryArray {



    public static void main(String args[]) {
        int size;
        int a[] = {1,0,0,1,1,0,1,0};
        size = a.length;
        take(a,size);

        System.out.print(Arrays.toString(a));


        int b[] = {1,0,0,1,1,0,1,0,0,0,1};
        size = b.length;
        take1(b,size);

        System.out.print(Arrays.toString(b));

        int c[] = {1,0,0,1,1,0,1,0,0,0,1};
        size = c.length;
        take2(c,size);
        System.out.print(Arrays.toString(c));

    }

    static void take(int a[], int n){
        int c1=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
                c1++;
        }

        for(int i=0;i<n;i++){
            if(i<c1)
                a[i]=0;
            else
                a[i] =1;
        }

    }


    static void take1(int a[], int n){
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) {
                a[j] = a[i];
                j++;
            }
        }

        for(int i=j;i<n;i++){
            a[i]=1;
        }






    }

    static void swap(int a[], int i, int j){
        a[i]= a[i]+a[j];
        a[j]= a[i]-a[j];
        a[i]= a[i]-a[j];
    }

    static void take2(int a[], int n){
        int pivot =1;
        int j=0;
        for(int i=0;i<n;i++){
            if(a[i]<pivot){
                swap(a,i,j);
                j++;


            }
        }



    }



}
