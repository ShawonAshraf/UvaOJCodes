#include <stdio.h>

int main()
{
    int c,x[1000],i,j,s,count;
    float avg,n,a;

    while(scanf("%d",&c)==1)
    {

        for(i=1; i<=c; i++)
        {
            avg = 0;
            count = 0;
            scanf("%f",&n);
            s=0;
            for(j=1; j<=n; j++)
            {
                scanf("%d",&x[j]);
                s=s+x[j];
            }
            avg=s/n;

            for(j=1; j<=n; j++)
            {
                if(x[j]>avg)
                {
                    count=count+1;
                }
            }
            a=(count*100)/n;
            printf("%0.3f%%\n",a);
        }
    }
    return 0;
}
