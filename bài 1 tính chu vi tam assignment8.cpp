#include <stdio.h>
int chuvitamgiacabc(int a,int b,int c){

	return a+b+c;
	}
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);

	int b;
	printf("nhap b=");
	scanf("%d",&b);

	int c;
	printf("nhap c=");
	scanf("%d",&c);
	if(a+b>c||a+c>b||b+c>a){
	printf("chu vi tam giac la %d",a+b+c);
	}ee{
	printf("ba canh vua nhap khong hop le");
	}


}