#include <stdio.h>
int main(){
	int n,i;float s=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		s+=(float)(2*i+1)/(2*i+2);	
	}
	printf("%.2f",s);
	
}
