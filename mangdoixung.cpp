#include <stdio.h>
#include <math.h>
int check(int a[],int l, int r){
	if (l>=r){
		return 1;
	}
	if (a[l]!=a[r]) return 0;
	if (a[l]==a[r]) return check(a,l+1,r-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if (check(a,0,n-1)) printf("YES");
		else printf("NO");
	return 0;
}
