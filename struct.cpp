// 79 6
#include<stdio.h>
typedef struct date{
    int ngay, thang, nam;

    void input(){
        scanf("%d%d%d",&ngay,&thang,&nam);
    }
    void print(){
        printf("%d/%d/%d",ngay,thang,nam);
    }
}Ngay;
typedef struct SinhVien{
    char MSSV[10];
    char hoTen[50];
    float diemTB;
    Ngay ngaySinh;

    void print(){
        printf("Ma sinh vien: %s", MSSV);
        printf("Ten: %s", hoTen);
        printf("GPA: %.2f", diemTB);
    }

    void input(){
        printf("Nhap MSSV: ");
        scanf("%s",&MSSV);
        fflush(stdin);
        printf("Nhap ten: ");
        gets(hoTen);
        printf("Nhap diem trung binh: ");
        scanf("%f",&diemTB);
        printf("Nhap ngay sinh: ");
        ngaySinh.input();
    }
}SV;
// nhap dung dinh dang cua ngay thang nam
// nhap thang 1: 31
// ve nha lam


// Nhap 1 danh sach sinh vien
void NhapDS(SV a[], int n){
    for(int i=0;i<n;i++){
        printf("\nNhap thong tin sinh vien thu %d: \n", i+1);
        a[i].input();
    }
}

void XuatDS(SV a[], int n){
    for (int i = 0; i < n; i++){
        printf("\nThong tin sv thu %d vua nhap la: \n", i+1);
        a[i].print();
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