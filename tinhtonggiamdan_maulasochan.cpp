#include <stdio.h>
int main(){
	int n,i;float s=0.0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		s+=(float)1/(2*i);
	}
	printf("%.2f",s);
	
}
