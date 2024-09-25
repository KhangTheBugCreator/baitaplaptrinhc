#include <stdio.h>
int main(){
	int n,i;float s=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		s+=(float)1/(2*i+1);
	}
	printf("%.2f",s);
	
}
