#include <stdio.h>
#include <math.h>
//Tinh UCLN
 int UCLN(int x, int y) {
    x = abs(x);
    y = abs(y);
     int k;
     if (x == 0){
         k = y;
         return 0;
     }
     for (int i = x; i > 0; i--) {
         if (x % i == 0 && y % i == 0) {
             k = i;
             break;
         }
     }
     return k;
 }
//Rut gon phan so trong mang
void rutgon(int tuso[], int mauso[], int n) {
 int uc;
 for (int i = 0; i < n; i++) {
     uc = UCLN(tuso[i], mauso[i]);
     printf("\nPhan so thu %d sau rut gon la %d / %d", i, tuso[i] / uc, mauso[i] / uc);
 }
}
 int main(){
    int a = -9, b = 3;
    int x[3] = {-9, 4, 5}, y[3] = {6, 8, 6};
    printf("UCLN = %d", UCLN(a, b));
    rutgon(x, y, 3);
 }


// int main(){
//     if (-9 % 3 == 0){
//         printf("Yes");
//     }else{
//         printf("No");
//     }
// }