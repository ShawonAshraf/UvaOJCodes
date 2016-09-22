#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>

typedef long long int  L;

using namespace std;


L f(L n);

int main()
{
    L n, r;
    
    
    while(scanf("%lld", &n) == 1)
    {
        if(n == 0) break;
        else if(n < 10) r = n;
        else
        {
            r = f(n);
            while( !(r < 10) )
            {
                r = f(r);
            }
        }
        
        printf("%lld\n", r);
    }
    
    
    return 0;
}


L f(L n)
{
    L sum = 0;
    
    while(n > 0)
    {
        L t = n % 10;
        sum += t;
        n /= 10;
    }
    
    return sum;
}