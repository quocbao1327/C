#include<stdio.h>
#include<math.h>
int main(){
	// START OF BUOI 2!
	//BAI 1 : TONG TAT CA CAC CANH CUA HINH HOP CHU NHAT
	int S1 , S2 , S3; // DIEN TICH BA MAT CO CHUNG DINH
	scanf("%d %d %d" , &S1 , &S2 , &S3);
	double sum = 0;// TONG 12 CANH
	double a = 0 , b = 0 , c = 0 ; // ba canh
	a = sqrt(1.0 * S1 * S3 / S2);
	b = sqrt(1.0 * S1 * S2 / S3);
	c = sqrt(1.0 * S2 * S3 / S1);
	sum = 1.0 * (4 * (a + b + c));
	printf("%.6lf" , sum);
	return 0;
}
