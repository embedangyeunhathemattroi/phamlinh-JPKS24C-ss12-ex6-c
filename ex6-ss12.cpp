#include <stdio.h>
int laSoHoanHao(int n) {
    if (n <= 0) {
        return 0; 
    }

    int tongUoc = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tongUoc += i; 
        }
    }

    
    return (tongUoc == n) ? 1 : 0; 
}
int main(){
    int so1, so2;

    
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    
    if (laSoHoanHao(so1)) {
        printf("%d là so hoan hao.\n", so1);
    } else {
        printf("%d khong phai so hoan hao .\n", so1);
    }

    
    if (laSoHoanHao(so2)) {
        printf("%d là so hoan hao.\n", so2);
    } else {
        printf("%d khong phai so hoan hao.\n", so2);
    }

    return 0;
}
