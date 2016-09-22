#include <iostream>
#include <cstdio>
#include <algorithm>


using namespace std;


typedef long long int LL;


int main()
{
    LL n;
    
    while(scanf("%lld", &n) == 1)
    {
        if(n < 0) break;
        else
        {
            LL r = n * (n + 1) / 2 + 1;
            printf("%lld\n", r);
        }
    }
    
    
    return 0;
}