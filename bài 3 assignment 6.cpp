#include<stdio.h>
 int main (){
 	int arr[10]={0,1,2,3,4,5,6,7,8,9};
 	int dem =0;
 	int x;
 	printf(" nhap so x :");
 	scanf("%d",&x);
 	 for (int i = 0; i < 10; i++){
 	 	if(x == arr[i]){
 	 		printf("x thuoc mang ");
 	 		dem++;

 		 }
 	 }
 	 if(dem==0){
 	 	printf(" x khong thuoc mang");
 	 }

 }