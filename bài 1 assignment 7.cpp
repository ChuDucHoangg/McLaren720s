#include <stdio.h>
int main(){
    int a[1000],i;
    int n;
    printf("nhập số lượng số nguyên có trong mảng n=");
    scanf("%d",&n);
    int x;
    printf("nhập giá trị x=");
    scanf("%d",&x);
    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        }
        int j=0,kiemtrasoxanhat;
         kiemtrasoxanhat=(a[0]-x);
         for(i=0;i<n;i++){
        if (x>=a[i]){
       
        if (x-a[i]>kiemtrasoxanhat){
           kiemtrasoxanhat=x-a[i];
           j=i;
           }
        }else {
           if (a[i]-x>kiemtrasoxanhat){
               kiemtrasoxanhat=a[i]-x;
               j=i;
               }
           }
           }
           printf("giá trị xa x nhất là %d",a[j]);
       }
