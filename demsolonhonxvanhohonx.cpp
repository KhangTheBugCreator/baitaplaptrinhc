#include <stdio.h>
int main(){
	int a[1000];
	int n,i,x,smaller=0,bigger=0;
	printf("nhap n=");
	scanf("%d",&n);
	printf("nhap x=");
	scanf("%d",&x);
	for (i=0;i<n;i++){
		printf("nhap phan tu thu %d=",i+1);
		scanf("%d",&a[i]);			
	}
	for (i=0;i<n;i++){
		if (a[i]>x) bigger++;
		if (a[i]<x) smaller++;
	}
	printf("so luong so lon hon %d la: %d\n",x,bigger);
	printf("so luong so nho hon %d la: %d",x,smaller);
	return 0;	
}
