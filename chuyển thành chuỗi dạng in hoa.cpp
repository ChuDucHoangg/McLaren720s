#include <stdio.h>
#include <string.h>
int main(){
	char s1[100];
	printf("nhập vào chuỗi 1:\n");
	scanf("%s",s1);
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]>=97 && s1[i]<=122){
			s1[i]=s1[i]-32;
		}
	}
    
	printf("chuỗi in hoa là : %s",s1);

}
