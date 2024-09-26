#include <stdio.h>
int ktrangto(int n){
	int i;
	if (n<2) return 0;
		else
			for (i=2;i<n;i++){
				if (n%i==0){
					return 0;
					break;
				}
			
		}
	return 1;
}
int main(){
	int n,i,s=0,dem=0;float kq=0;
	int a[1005];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("nhap phan tu thu %d=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if (ktrangto(a[i])==1){
			dem+=1;
			s+=a[i];
		}
	}
	kq=(float)s/dem;
	printf("%.3f",kq);
}
