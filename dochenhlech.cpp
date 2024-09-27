#include <stdio.h>
#include <math.h>
int main(){
	int n,j,i,a[1005];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=abs(a[1]-a[0]);
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++){
			if (min>abs(a[i]-a[j]))
				min=abs(a[i]-a[j]); 
		}
	printf("%d",min);
	return 0;
}
