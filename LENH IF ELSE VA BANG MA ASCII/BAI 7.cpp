#include<stdio.h>

int main () {
	int Celsius;
	double  Fahrenheit;
	scanf ("%d" , & Celsius);
	Fahrenheit = (1.0 * Celsius * 9 / 5) + 32;
	printf ("%.2lf" , Fahrenheit);
	return 0;
}

