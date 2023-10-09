#include <stdio.h>

int main()
{
	int x, N;
	printf("Nhap thoi gian cuoc goi (giay): ");
	scanf("%d", &N);
	printf("Nhap so tien 1 block (dong): ");
	scanf("%d", &x);

	int ketqua = (N%6 == 0) ? (x*(N/6)) : (x*int(N/6+1));

	printf("So tien ban phai tra la: %d dong", ketqua);
}
