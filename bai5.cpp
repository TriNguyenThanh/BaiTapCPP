#include <stdio.h>
#include <math.h>

int main()
{
	float AB, AC, BC,xa,ya,xb,yb,xc,yc,h;

	printf("Nhap toa do diem A(xa, ya): ");
	scanf("%f %f", &xa, &ya);

	printf("\nNhap toa do diem B(xb, yb): ");
	scanf("%f %f", &xb, &yb);

	printf("\nNhap toa do diem C(xc, yc): ");
	scanf("%f %f", &xc, &yc);

	printf("\nNhap chieu cao h: ");
	scanf("%f", &h);

	AB = sqrt(pow(xa-xb, 2) + pow(ya-yb, 2));
	AC= sqrt(pow(xa-xc, 2) + pow(ya-yc, 2));
	BC = sqrt(pow(xc-xb, 2) + pow(yc-yb, 2));

    float p = (AB + BC + AC) / 2;
	float s = sqrt(p*(p-AC)*(p-AB)*(p-BC));
    float v = (s*h)/3;

	printf("\nThe tich tu dien = %.1f", v);
}
