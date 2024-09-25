#include <stdio.h>
long long tinhgiaithua(long long n){
	long long i,p=1;
	for (i=2;i<=n;i++){
		p=p*i;
	}
	return p;
}
int main(){
	long long n=0;
	printf("%lld",tinhgiaithua(n));
}
