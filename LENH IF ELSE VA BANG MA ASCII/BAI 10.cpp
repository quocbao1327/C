#include<stdio.h>

int main(){
	int n;
	double sum;
	scanf ("%d" , &n) ;
	sum = 1 - 1.0 / ((float)n + 1);
	printf ("%.2lf" , sum);
	return 0;
}

