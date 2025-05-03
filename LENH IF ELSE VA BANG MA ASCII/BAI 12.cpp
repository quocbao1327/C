#include<stdio.h>

int main(){
	long long number , sum;
	scanf ("%lld", &number);
	if(number % 2 == 0) {
		sum = number / 2;
	}
	else{
		sum = - (number + 1)/2;
	}
	printf ("%lld" , sum);
}

