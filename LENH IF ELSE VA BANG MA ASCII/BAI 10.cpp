#include<stdio.h>

int main(){
	int n;
	double Sum;
	scanf ( "%d" , &n ) ;
	Sum = 1 - 1.0 / ( (float) n + 1 );
	printf ( "%.2lf" , Sum );
}

