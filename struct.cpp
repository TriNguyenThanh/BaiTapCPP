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

void NhapNgay(time &t){
    printf("Nhap ngay, thang, nam: ");
    scanf("%d%d%d", &t.ngay, &t.thang, &t.nam);
}

void XuatNgay(time &t){
    printf("Ngay thang nam sinh: %d/%d/%d\n", t.ngay, t.thang, t.nam);
}

void NhapSV(SV &a){
    printf("Nhap thong tin sinh vien: \n");
    printf("Nhap ma sinh vien: ");
    scanf("%s", &a.MSSV);
    fflush(stdin);
    printf("Nhap Ho va ten sinh vien: ");
    gets(a.Hoten);
    printf("Nhap diem trung binh: ");
    scanf("%f", &a.diemTB);
    NhapNgay(a.ngaySinh);    
}

void XuatSV(SV &a){
    printf("***\nThong tin sinh vien vua nhap\n");
    printf("Ma sinh vien: %s\n", a.MSSV);
    printf("Ho va ten: %s\n", a.Hoten);
    printf("Diem trung binh: %.2f\n", a.diemTB);
    XuatNgay(a.ngaySinh);

}
int main() {
    SV Sinhvien1;
    NhapSV(Sinhvien1);
    XuatSV(Sinhvien1);
}