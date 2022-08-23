#include <stdio.h>

 int main(){
     int n, a;
     printf("nhap so nguyen =");
     scanf("%d", &n);
     int y = 0;
     while(n > 0){
         a = n % 10;
         y = y * 10 + a;
         n = n / 10;
     }
     printf("so dao nguoc=%d", y);
 }
