#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, temp_s, temp_d, s, d;
    

    scanf("%d", &n);
        
    for(int i = 1; i <= n; i++){
            
        scanf("%d %d", &temp_s, &temp_d);
            
        if( temp_d <= temp_s && (temp_s + temp_d) % 2 == 0){
            
            s = (temp_s + temp_d) / 2;
            d = (temp_s - temp_d) / 2;
            
            cout << s << " " << d << endl;
            
        }
        
        else{
            
            cout << "impossible" << endl;
            
        }
    }
    
    return 0;
}