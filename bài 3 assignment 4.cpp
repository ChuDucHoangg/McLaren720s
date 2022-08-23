#include<stdio.h>
 int main (){
 	int n;
 	printf("nhap so nguyen n =");
 	scanf("%d",&n);
 	int s = 0;

 	while(n>s){
 		s+=n%10;
 		n/=10;
 	}
 	printf("tong cac chu so n =%d",s);
 }