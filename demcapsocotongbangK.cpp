#include <stdio.h>
int main(){
	int dem=0,n,i,j,k,a[10000];
	scanf("%d",&n);
	scanf("%d",&k);
	for (i=0;i<n;i++){
		printf("nhap phan tu thu %d=",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (a[i]+a[j]==k)
				dem+=1;
		}
	}
	printf("%d",dem);
	return 0;
}
