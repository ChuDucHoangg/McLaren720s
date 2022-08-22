#include <stdio.h>
int uocchunglonnhat(int a,int b){
	for(int i=(a,b);i>0;i--){
		if(a%i==0&&b%i==0)
			return i;

	}
	
}
int main(){
	int a;
	printf("nhập số thứ nhất a =");
	scanf("%d",&a);
	int b;
	printf("nhập số thứ hai b =");
	scanf("%d",&b);
	int c=uocchunglonnhat(a,b);
	printf("ước chung lớn nhất của %d và %d là %d",a,b,c);
}