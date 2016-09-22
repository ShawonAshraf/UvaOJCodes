#include <stdio.h>
int main()
{
    char ch,s;
    int i;

    while(scanf("%c",&ch)==1)
    {
        if(ch=='\n') printf("\n");
        else {
            s=ch-7;
            printf("%c",s);
        }
    }

    return 0;

}
