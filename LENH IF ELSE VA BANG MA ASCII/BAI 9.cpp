#include<stdio.h>

int main(){
	int n;
	long long sum;
	scanf ("%d" , &n);
	sum = (1ll * n * (n + 1) * (2 * n + 1)) / 6;
	printf ("%lld" , sum);
	return 0;
}


