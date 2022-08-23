#include <stdio.h>
int a[100];
int main(){
    int i,dem=0,n,s=0;
    printf("số phần tử của mảng : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("nhập phần tử thứ %d:",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            s+=a[i];
            dem++;


    }
        }printf("trung bình cộng các số lẻ có trong mảng là:%.2f",(float)s/dem);


}