#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    string number;
    int base_from, base_to;
    int result = 0;
    
    cin >> number;
    cin >> base_from;
    cin >> base_to;
    
    
    if(base_from > base_to)
    {
        cout << setw(7) << "ERROR" << endl;
    }
    
    else
    {
        int len = number.length();
        
        for(int i = 0; i < len; i++)
        {
            int x = number.at(i) - '0';
            
            result += x * pow(base_from, i);
        }
    }
    

    printf("");
    
    return 0;
}