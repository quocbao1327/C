#include<stdio.h>

int main(){
	int n;
	long long Sum;
	scanf ( "%d" , &n );
	Sum = ( 1ll * n * ( n + 1 ) * ( 2 * n + 1) ) / 6;
	printf ( "%lld" , Sum );
}


