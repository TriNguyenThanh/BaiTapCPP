#include <stdio.h>
int main()
{
    float a,b;
    printf("Nhap he so cua a.x + b = 0:\na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);

    float x = -(b/a);

    printf("x = %.1f", x);
    return 0;
}