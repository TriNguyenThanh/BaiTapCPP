// 79 6
#include<stdio.h>
typedef struct date{
    int ngay, thang, nam;
}Ngay;
typedef struct SinhVien{
    char MSSV[10];
    char hoTen[50];
    float diemTB;
    Ngay ngaySinh;  
}SV;
// nhap dung dinh dang cua ngay thang nam
// nhap thang 1: 31
// ve nha lam
void NhapNgay(Ngay &d){
    scanf("%d%d%d",&d.ngay,&d.thang,&d.nam);
}
void XuatNgay(Ngay d){
    printf("%d/%d/%d",d.ngay,d.thang,d.nam);
}
void NhapSV(SV &a){
    printf("Nhap MSSV: ");
    scanf("%s",&a.MSSV);
    fflush(stdin);
    printf("Nhap ten: ");
    gets(a.hoTen);
    printf("Nhap diem trung binh: ");
    scanf("%f",&a.diemTB);
    printf("Nhap ngay sinh: ");
    NhapNgay(a.ngaySinh);
}
void XuatSV(SV a){
    printf("MSSV: %s", a.MSSV);
    printf("\nHo ten: %s", a.hoTen);
    printf("\nDiem TB: %.2f",a.diemTB);
    printf("\nNgay sinh: ");
    XuatNgay(a.ngaySinh);
}
// Nhap 1 danh sach sinh vien
void NhapDS(SV a[], int n){
    for(int i=0;i<n;i++){
        printf("\nNhap thong tin sinh vien thu %d: ", i);
        NhapSV(a[i]);
    }
}

void XuatDS(SV a[], int n){
    for (int i = 0; i < n; i++){
        printf("\nThong tin sv thu %d vua nhap la: \n", i+1);
        XuatSV(a[i]);
    }
}

float DTB(SV a[], int n){
    float S = 0;
    for (int i = 0; i < n; i++){
        S += a[i].diemTB; 
    }
    return S;
}
// Xuat 1 danh sach sinh vien
// Tinh tong diem trung binh cua ca lop
int main(){
    SV sv[100];
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    NhapDS(sv, n);
    XuatDS(sv, n);
    printf("Tong diem trung binh cua ca lop la: %.2f", DTB(sv, n));
}