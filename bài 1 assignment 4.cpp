#include<stdio.h>
 int main(){
     int n;
     do{
         printf("nhap so nguyen n lon hon 0:");
         scanf("%d",&n);
         if(n <= 0){
             printf ( "Nhap lai n lon hon khong = ");
         }
     }while(n <= 0);
     int s = 0;
     for(int i = 1;i <= n;i++){
         if(n % i == 0){
             s += i;
         }
     }
     printf ( "tong cua cac uoc  =%d ",n) ;
 }