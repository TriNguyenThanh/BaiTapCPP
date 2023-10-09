#include <stdio.h>
#include <math.h>

bool ktnt(int n);
void InputMaTran(int a[50][50], int d, int c);

int main()
{
    int d, c, Dem = 0, S = 0;
    printf("Nhap so hang: ");
    scanf("%d", &d);
    printf("Nhap so cot: ");
    scanf("%d", &c);

    int a[50][50];
    InputMaTran(a, d, c);

    for (int i = 0; i < d; i++){
        for (int j = 0; j < d; j++){
            if (ktnt(a[i][j])){
                Dem += 1;
            }
            S += a[i][j];
        }
    }

    printf("\nSo luong so nguyen to trong ma tran la: %d", Dem);
    printf("\nTong cua ma tran la: %d", S);
    return 0;
}
bool ktnt(int n)
{
    if (n > 1){
        for (int i = 2; i<= sqrt(n); i++ ){
            if (n%i==0) return false;
        }
        return true;
    }else{
        return false;
    }
}

void InputMaTran(int a[50][50], int d, int c)
{
    printf("\nNhap ma tran %dx%d: ", d, c);
    for (int i = 0; i < d; i++){
        for (int j = 0; j < d; j++){
            printf("\na[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n---Da nhap xong ma tran---");
}
