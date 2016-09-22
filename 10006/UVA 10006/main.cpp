#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

typedef long long int L;

bool isCharmichael(L n);
bool isPrime(L n);

int main()
{
    L n;
    
    while(scanf("%lld", &n) == 1)
    {
        if(n == 0) break;
        else
        {
            bool b = isCharmichael(n);
            
            if(b)
            {
                printf("%lld is normal\n", n);
            }
            else
            {
                printf("The number %lld is a Charmichael number\n", n);
            }
        }
    }
    
    return 0;
}


bool isCharmichael(L n)
{
    bool r = false;
    
    
    for(int i = 2; i < n; i++)
    {
        
    }
    
    return r;
}