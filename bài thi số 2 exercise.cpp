#include <stdio.h>
int main(){
    int n;
    printf("nhập số lượng phần tử mảng n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("nhập phần tử thứ nhất %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("số đảo ngược trong mảng lần lượt là %d\n",arr[i]);
    }
}