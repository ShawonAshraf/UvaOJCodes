#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>


using namespace std;


int main()
{
    double n, p, k;
    
    while(scanf("%lf %lf", &n, &p) == 2)
    {
        k = pow(p, 1.0/n);
        
        printf("%0.0lf\n", k);
                
    }
    
    return 0;
    
}