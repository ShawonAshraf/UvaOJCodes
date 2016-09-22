#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int t, d;
    vector<int> v;
    
    while(scanf("%d", &t) == 1)
    {
        if(t == 0) break;
        
        for(int i = 0; i < t; i++)
        {
            scanf("%d", &d);
            v.push_back(d);
        }
        
        sort(v.begin(), v.end());
        
        int x = v.size();
        for(int i = 0; i < x; i++)
        {
            printf("%d", v.at(i));
            if(i < (x - 1)) printf(" ");
        }
        printf("\n");
        
        v.clear();
    }
    
    
    return 0;
}