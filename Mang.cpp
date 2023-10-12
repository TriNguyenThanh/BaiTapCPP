#include <stdio.h>

void NhapMang(int a[100], int n);
int Max1(int a[100], int n);
int Max2(int a[100], int n, int Max1);
int index(int a[100], int n, int SoCanTim);

int main(){
    int sopt, a[100], SoLon2, SoLon1, Vt, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &sopt);

    NhapMang(a, sopt);

    printf("\nNhap so can tim: ");
    scanf("%d", &x);

    SoLon1 = Max1(a, sopt);
    SoLon2 = Max2(a, sopt, SoLon1);
    Vt = index(a, sopt, x);
    //Xuat ra man hinh so lon nhat
    if (SoLon1 == SoLon2)
        printf("\nKhong co so lon thu 2.");
    else
        printf("\nSo lon thu hai trong mang la: %d", SoLon2);
    //Xuat ra man hinh vi tri xuat hien dau tien cua x
    if (Vt == -1)
        printf("\nKhong tim thay %d trong mang.", x);
    else
        printf("\nVi tri xuat hien dau tien cua %d la: %d", x, Vt);
}

void NhapMang(int a[100], int n){
    printf("Nhap mang co %d phan tu: \n", n);
    for (int i = 0 ; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int Max1(int a[100], int n){
    int MAX = a[0];
    for (int i = 1; i <n; i++){
        MAX = (a[i] > MAX) ? a[i]:MAX;
    }
    return MAX;
}

int Max2(int a[100], int n, int Max1){
    int MAX = a[0];
    int Vt = 0;
    for (int i = 1; i<n; i++){
        if (MAX < Max1){
            Vt = i;
            break;
        }else{
            MAX = a[i];
        }
    }
    
    for (int i = Vt; i < n; i++){
        if (a[i] > MAX && a[i] < Max1)
            MAX = a[i];
    }
    return MAX;
}
int index(int a[100], int n, int SoCanTim){
    for (int i = 0; i < n; i++){
        if (a[i] == SoCanTim){
            return i;
        }
    }
    return -1;
}