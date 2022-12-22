#include<stdio.h>
int main()
{
    float a;
    float surface_area,volume;
    scanf("%f",&a);
    surface_area = 6 * (a * a);
    volume = a * a * a;
    printf("Surface area = %.0f ",surface_area);
    printf("and Volume = %.0f",volume);

    return 0;
}