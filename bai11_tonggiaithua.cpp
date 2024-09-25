#include <stdio.h>

long long tinhgiaithua(long long);
int main(){
	long long i,s=0,n;
	scanf("%lld",&n);
	for (i=1;i<=n;i++){
		s+=tinhgiaithua(i);
	}
	printf("%lld",s);
}
long long tinhgiaithua(long long n){
	long long i,p=1;
	for (i=1;i<=n;i++){
		p=p*i;
	}
	return p;
}
