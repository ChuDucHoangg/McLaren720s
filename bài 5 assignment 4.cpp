#include<stdio.h>
 int main(){
 	int n;
 	int a;
 	int max =0;
 	printf("nhap so nguyen n=");
 	scanf("%d",&n);
 	while(n>0){
 		a=n%10;
 		if(a>max)
 		max=a;
 		n=n/10;
 	}
 	printf("so lon nhat =%d",max);
 }