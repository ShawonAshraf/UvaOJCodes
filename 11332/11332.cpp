#include <stdio.h>

int main()
{
    long int n, sum;
    int i;
    
    
    while(scanf("%ld", &n) && n){
        if(n<10) printf("%ld\n", n);
        if(n>9){
            while(n>9){
                sum =0;
                for(i=0; n>0; i++) {
                    sum=sum+ (n%10);
                    n = n/10;
                }
                n = sum;
            }
            printf("%ld\n", sum);
        }
    }
    return 0;
}