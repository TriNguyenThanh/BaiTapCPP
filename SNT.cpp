#include <stdio.h>
#include <math.h>

bool ktnt(int n){
    for (int i = 2; i <= sqrt(n); i++ ){
        if (n%i==0)
            return false;
    }
    return true;
}

int main(){
    int a = 5, b = 10;
    if (ktnt(b))
        printf("yes");
    else
        printf("No");
    return 0;
}