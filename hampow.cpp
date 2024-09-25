#include <stdio.h>
int main(){
	int kq=1,i,x,n;
	scanf("%d",&x);scanf("%d",&n);
	for (i=1;i<=n;i++){
		kq*=x;
	}
	printf("%d",kq);
}
