public class InlineMergeJava {

    public static void main(String args[]){


        int x[] = {1,4,7,8,10};
        int y[] ={2,3,9};

        int m = x.length;
        int n = y.length;

        merge(x,y,m,n);

        printArray(x,m);
        printArray(y,n);


    }

    static void merge(int x[], int y[], int m, int n) {

        for(int i=0;i<m;i++){

            if(x[i] > y[0]){

                swap(i,0,x,y);

                int len = y[0],k;

                for(k=1;k<n && y[k]<len;k++){

                    y[k-1]= y[k];


                }
                y[k-1] =len;


            }

        }



    }


    static void printArray(int a[], int m){

        for(int i=0;i<m;i++){
            System.out.print(a[i]);
            System.out.print(" ");


        }

        System.out.println();
    }


    static void swap(int i, int j, int a[], int b[]){

        int temp = a[i];
        a[i]= b[j];
        b[j]= temp;
    }


        }




