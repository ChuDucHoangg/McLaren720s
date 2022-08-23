#include<stdio.h>
 int main (){
 	// input n 
 	int n=0;
 	printf("nhap so nguyen=");
 	scanf("%d",&n);
 	int y = 1;
 	while (n<=y){
 		// yes	
 		n=n+y;
 		y++;

 	}
 	printf("so le nho hon n = %d",n);
 }