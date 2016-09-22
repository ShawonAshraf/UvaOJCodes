#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, hour, min, hour_r, min_r;
    
    while(scanf("%d", &t) == 1)
    {
        for(int i = 0; i < t; i++)
        {
            scanf("%d:%d", &hour, &min);
            
            if(hour == 12 || hour == 6) hour_r = hour;
            else hour_r = 11 - hour;
            
            if(min == 60 || min == 0)
            {
                min_r = 0;
                hour_r++;
            }
            else min_r = 60 - min;
            
            printf("%02d:%02d\n", hour_r, min_r);
        }
    }
    
    return 0;
}