#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    float k=0,f;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    k+=a[i];
    f=k/n;
    }
    printf("%.2f",f);
}