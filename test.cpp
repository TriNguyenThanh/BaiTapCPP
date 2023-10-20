//79 6 
#include<stdio.h>
#include<conio.h>
typedef struct date{
    int ngay, thang, nam;
}time; 
typedef struct SinhVien {
    char MSSV[10];
    char Hoten[50];
    float diemTB;
    time ngaySinh;
}SV;
int main() {
    SV Sinhvien1;
    printf("Nhap thong tin sinh vien: \n");
    printf("Nhap ma sinh vien: ");
    scanf("%s", &Sinhvien1.MSSV);
    printf("Nhap Ho va ten sinh vien: ");
    fflush(stdin);
    gets(Sinhvien1.Hoten);
    printf("Nhap diem trung binh: ");
    scanf("%f", &Sinhvien1.diemTB);
    printf("Nhap ngay, thang, nam sinh: ");
    scanf("%d%d%d", &Sinhvien1.ngaySinh.ngay, &Sinhvien1.ngaySinh.thang, &Sinhvien1.ngaySinh.nam);

    printf("***\nThong tin sinh vien vua nhap\n");
    printf("Ma sinh vien: %s\n", Sinhvien1.MSSV);
    printf("Ho va ten: %s\n", Sinhvien1.Hoten);
    printf("Diem trung binh: %.2f\n", Sinhvien1.diemTB);

    printf("Ngay thang nam sinh: %d/%d/%d\n", Sinhvien1.ngaySinh.ngay, Sinhvien1.ngaySinh.thang, Sinhvien1.ngaySinh.nam);
}