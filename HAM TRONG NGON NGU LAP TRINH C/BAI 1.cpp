#include<stdio.h>
#include<math.h>
int main(){
	// START OF BUOI 2!
	//BAI 1 : TONG TAT CA CAC CANH CUA HINH HOP CHU NHAT
	int area1 , area2 , area3; // DIEN TICH BA MAT CO CHUNG DINH
	scanf("%d %d %d" , &area1 , &area2 , &area3);
	int sum = 0;// TONG 12 CANH
	double a = 0 , b = 0 , c = 0 ; // ba canh
	a = sqrt(1.0 * area1 * area3 / area2);
	b = sqrt(1.0 * area1 * area2 / area3);
	c = sqrt(1.0 * area2 * area3 / area1);
	sum = 1.0 * (4 * (a + b + c));
	printf("TONG TAT CA CAC CANH CUA HINH HOP CHU NHAT LA : %d" ,sum);
	return 0;
}
