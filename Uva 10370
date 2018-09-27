#include<stdio.h>
int main()
{
    int t,i,j;
    float l,ck,k,n,a[1000],sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        l=0.0;
        sum=0.0;
        scanf("%f",&n);
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[j]);
            sum=sum+a[j];
        }
        ck=sum/n;
        for(j=0;j<n;j++)
        {
            if(a[j]>ck)
            {
                l=l+1;
            }

        }
       k=l/n;
        printf("%.3f%%\n",k*100);
    }
    return 0;
}
