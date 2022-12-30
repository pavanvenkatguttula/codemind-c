#include<stdio.h>
int main()
{
    int x,y,c;
    scanf("%d%d",&x,&y);
    c=x-(y*30);
    if(c>=y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}