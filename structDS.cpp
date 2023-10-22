//79 6 
#include<stdio.h>
#include<conio.h>
typedef struct date{
    int ngay, thang, nam;
}time;

typedef struct SinhVien {
    char MSSV[15];
    char Hoten[50];
    float diemTB;
    time ngaySinh;
}SV;

bool ktNgay(int ngay, int thang, int nam){
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
        if (1 <= ngay && ngay <= 31)
            return true;
    }else if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
        if (1 <= ngay && ngay <= 30)
            return true;
    }else if (thang == 2){
        if (nam % 4 == 0){
            if (1 <= ngay && ngay <= 29)
                return true;
        }else{
            if (1 <= ngay && ngay <= 28)
                return true;  
        }
    }
    printf("-----Nhap sai dinh dang-----\n");
    return false;
}

void NhapNgay(time &t){
    do{
        printf("Nhap ngay, thang, nam: ");
        scanf("%d%d%d", &t.ngay, &t.thang, &t.nam);
    }while (!ktNgay(t.ngay, t.thang, t.nam));
}

void XuatNgay(time &t){
    printf("Ngay thang nam sinh: %d/%d/%d\n", t.ngay, t.thang, t.nam);
}

void NhapSV(SV &a){
    printf("Nhap thong tin sinh vien: \n");
    printf("Nhap ma sinh vien: ");
    scanf("%s", &a.MSSV);
    fflush(stdin);
    printf("Nhap ho va ten sinh vien: ");
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