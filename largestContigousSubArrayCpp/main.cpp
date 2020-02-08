#include <iostream>
#include <vector>

using namespace std;


// the idealogy of doing this is real important
void printIndices(int a[], int n);


bool isContigous(int a[], int i, int j, int min, int max);

/*finding the largest subarray that is contigous means <continous elements should be presented
in that array, though they may not be in a sorted order.*/

int main() {
//    std::cout << "Hello, World!" << std::endl;

int a[]= {2,0,2,1,4,3,1,0};
int n = sizeof(a)/sizeof(a[0]);

printIndices(a,n);





    return 0;
}

void printIndices(int a[], int n) {

    int l=1;
    int min_val,max_val;
    int start =0;
    int end =0;


    for(int i=0;i<n;i++){

        min_val = a[i];
        max_val = a[i];
        for(int j=i+1;j<n;j++){

            min_val = min(min_val,a[j]);
            max_val = max(max_val,a[j]);

            //check if the array is contigous
if(isContigous(a,i,j,min_val,max_val)){

    if (l<(j-i+1)){
        l = j-i+1;
        start =i;
        end =j;
    }



}

        }



    }

   cout << "subarray at "<<start<<" "<<end<<endl;

}


bool isContigous(int a[], int i, int j, int min_val, int max_val) {
     if((max_val-min_val)!=(j-i)){
         return false;
     }

     vector<bool> visit(j-i+1);

     for(int k = i;k<=j;k++){
         if(visit[a[k]-min_val]){
             return false;

         }
         visit[a[k]-min_val] = true;

     }

     return true;



    return false;
}
