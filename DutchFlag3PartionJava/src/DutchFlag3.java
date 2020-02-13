public class DutchFlag3 {

    public static void main(String args[]) {
        int a[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
        int n = a.length;

        dutch3sort(a, n);
        for (int i = 0; i < n; i++)
            System.out.print(a[i]);

        System.out.println();


    }

    static void swap(int a[], int i, int j) {

        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    }

    static void dutch3sort(int a[], int n) {

        int start = 0;

        int mid = 0;

        int end = n - 1;

        int pivot = 1;

        while (mid <= end) {

            if (a[mid] < pivot) {

                swap(a, mid, start);
                mid++;
                start++;

            } else if (a[mid] > pivot) {
                swap(a, mid, end);
                --end;

            } else {
                ++mid;
            }
        }


    }
}
