#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c||c>a)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",a);
    }
}