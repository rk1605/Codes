#include<stdio.h>
int main()
{
    int n,k,i,j,c=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j]&&(a[i]+a[j])%k==0)
            c++;

        }

    }
    printf("%d",c);

}
