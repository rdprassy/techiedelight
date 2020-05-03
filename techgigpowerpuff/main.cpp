/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char *a[])
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long b[n];
        long long c[n];

        for(long long i =0; i<n; i++){
//            cin>>b[i];
            scanf("%lld",&b[i]);
        }


        for(long long i =0; i<n; i++){
//            cin>>c[i];
            scanf("%lld",&c[i]);
        }

        sort(b,b+n);
        sort(c,c+n);
        long long count = 0;

        for(long long i=0,j=0;i<n;i++){
            if(b[j]>c[i]){
             //   cout<<"comparing"<< b[j]<<" "<<c[i]<<" "<<i<<" vs"<<j <<endl;
                count++;
                j++;
                if(j>=n){
                    break;
                }
            }
            else{
                i--;j++;
                if(j>=n){
                    break;
                }

            }

        }

//        cout<<count<<endl;
        printf("%lld\n",count);

    }

    return 0;
}
