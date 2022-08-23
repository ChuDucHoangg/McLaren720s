#include<stdio.h>
 int main (){
 	int a;
 	int b;
 	printf("nhap a,b >0=");
 	scanf("%d%d",&a,&b);

 	if (a,b>=0){
 		if (a,b==0){
 			printf("khong co UCLN,BCNN");
 		}else if(a==0|| b==0){
 			printf("khong co UCLN,BCNN=%d");

 		}else {
 			int BC = a*b;

 			while(a!=b){
 				if(a>b){
 					a=a-b;

 				}else {
 					b=b-a;
 				}
 			}
 			printf("UCLN=%d",a);
 			printf("BCNN=%d",BC/a);
 		}
 	}else{
 		printf("nhap a,b>0=");
 	}
    //no
}    