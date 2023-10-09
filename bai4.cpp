#include <iostream>

int main()
{
    int luong_co_so = 1800000;
	char hoten[50];
	float HSL;

	printf("Nhap ho ten nhan vien: ");
	gets(hoten);

	printf("Nhap he so luong: ");
	scanf("%f", &HSL);

	float luong_co_ban = luong_co_so * HSL;
	float Hs_BHYT = 0.015;
	float Hs_BHTN = 0.01;
	float Hs_Dang_phi = 0.01;
	float tienConLai = luong_co_ban - luong_co_ban*(Hs_BHYT + Hs_BHTN + Hs_Dang_phi);

	printf("So tien con linh cua nhan vien %s la: %d dong.", hoten, int(tienConLai));
	return 0;
}
