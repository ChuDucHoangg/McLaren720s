#include<stdio.h>
 int main(){
 	int a,n;
 	do{
 		printf("nhap n=");
 		scanf("%d",&n);
 		if ( n<0)
 		printf("nhap lai n= ");
 	}while (n<0);
 	a=n;
 	while(a!=0)
 	{
 		if(a<10)
 		printf("so dau tien cua n =%d",a);
 		a=a/10;
 	}
 	// no
 }