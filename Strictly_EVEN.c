#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,c=0,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;  
        }
        if(a[i]%2==0 && i%2==0)
        {
            s++;  
        }
    }
    if(c==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}