#include <stdio.h>
int main(){
	int n;
	float s;
	s=0;
	do
  {
    printf("Nhập vào số n: ");
    scanf("%d", &n);
    if(n < 1)
    {
      printf("Số n phải lớn hơn hoặc bằng 1, vui lòng nhập lại !");
    }
}while(n<1);
		//yes
		for(int i=1;i<=n;i++){
		s=s+1.0/i;
		

		
	}//no
	printf("Tổng 1 + 1/2 + ... + 1/%d là: %.2f",n, s);
}