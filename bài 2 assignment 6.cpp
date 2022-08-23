#include<stdio.h>
 int main(){
    int arr[100];
    int i,dem=0,n,s=0;
    printf("nhap so phan tu cua mang :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("nhap phan tu %d ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            s +=arr[i];
            dem++;
        }
    }

    printf("trung binh cong cac so le o vi tri chan la : %d",s,dem);

 }
