#include <stdio.h>

int main(){
	int dem=0,n,i,a[1005];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if ((i%2==0)&&(a[i]%2==0)){
			printf("%d  ",a[i]);
			dem=dem+1;
		}				
	}
	if (dem==0){
		printf("NONE");
	}
	return 0;
}
