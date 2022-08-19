#include <stdio.h>
int main(){
    int a[100],i;
    int n;
    printf("nhập số lượng số nguyên trong mảng n=");
    scanf("%d",&n);
    int x;
    printf("nhập giá trị x=");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);

    }
    int kiemtrasogannhat,j=0;
    kiemtrasogannhat=(a[0]+x);
    for (i=0;i<n;i++){

    if(x>=a[i]){
        if(x+a[i]>kiemtrasogannhat){
            kiemtrasogannhat=x+a[i];
            j=i;
        }
        }else{
            if(a[i]+x>kiemtrasogannhat){
                kiemtrasogannhat=a[i]+x;
                j=i;
            }
        }
    }
    printf("giá trị gần x nhất là %d",a[j]);

}