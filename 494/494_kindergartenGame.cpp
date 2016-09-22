#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char w[1000];

    int c,i,len;

    while(gets(w)){
        i=0;
        c=0;
        len=strlen(w);

        while ( i < len) {
            while ( !isalpha (w[i]) )
                i++;
            if ( i < len)
                c++;
            while ( isalpha (w[i]) )
                i++;
        }
        printf("%d\n",c);

    }
    return 0;

}
