#include <stdio.h>
int main(){
	int n;
	printf("Nhap so cau can phai tra :");
	scanf("%d",&n);

	int arr[n];
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
	     scanf("%d",&arr[i]);
	}
	int tm =0, kl = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			tm++;
            if(kl < tm){
            	kl = tm;
            }

		}else{
			tm = 0;
		}
	}
	printf("So luong lien tiep nhieu nhat : %d",kl);
}