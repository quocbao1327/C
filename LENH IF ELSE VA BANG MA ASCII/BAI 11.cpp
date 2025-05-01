#include<stdio.h>

int main(){
	int number;
	long long sum;
	scanf ("%d" , &number);
	sum = (2 * 1ll * number * (1ll * number + 1)) / 2;
	printf ("%lld" , sum);
	return 0;
}

