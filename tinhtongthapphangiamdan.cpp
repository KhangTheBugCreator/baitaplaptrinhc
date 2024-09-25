#include <math.h>
#include <stdio.h>
int main(){
	float s=0;
	int n,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		s+=(float)1/i;
	}
	printf("%.2f",s);
	return 0;
}
