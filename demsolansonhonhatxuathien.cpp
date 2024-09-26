#include <stdio.h>
int sonhonhat(int a[],int n){
	int min=a[0];
	for (int i=1;i<n;i++){
		if (min>a[i])
			min=a[i];
	}
	return min;
}
int main(){
	int a[1005];
	int n,i,dem=0;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=sonhonhat(a,n);
	for(i=0;i<n;i++){
		if (a[i]==min)
			dem++;
	}
	printf("%d",dem);
	return 0;
}
