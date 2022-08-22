#include <stdio.h>
#include <math.h>
bool caccanhtamgiac(int a,int b,int c){
	if(a+b>c||a+c>b||b+c>a){
		return true;
	}else{
		return false;
	}
	}	 
     
    float dientichtamgiac(int a,int b,int c){
	float p;
	p=(a+b+c)/2;
	float s;
	s=sqrt(p*(p-a)*(p-b)*(p-c));

	return s;
		
	}
int main(){
	int a;
	printf("nhập cạnh a=");
	scanf("%d",&a);

	int b;
	printf("nhập cạnh b=");
	scanf("%d",&b);

	int c;
	printf("nhập cạnh c=");
	scanf("%d",&c);
	
	if (caccanhtamgiac(a,b,c)){
    
    float s=dientichtamgiac(a,b,c);
    printf("\ndiện tích tam giác là %.2f",s);
	}else{
	printf("ba canh vua nhap khong hop le");
	
	}

}

