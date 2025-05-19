#include<stdio.h>
#include<math.h>
int main(){
	// phuong trinh bac hai
	//DIEU KIEN : 0 <= a , b , c <= 10^9
	int a , b , c ;//ba so nguyen a , b , c
	long long delta = 0;
	double x1 = 0 , x2 = 0 ;
	scanf("%d %d %d" , &a , &b , &c);
	delta = pow(b , 2) - (4 * a * c);
	if(a == 0 && b != 0 && c == 0){
		printf("INFINITE");
	}
	else if(delta < 0){
		printf("NO");
	}
	else if(delta == 0){
		x1 = (-b) / (2 * a);
		x1 = x2;
		printf("%.2lf %.2lf" , x1 , x2);
	}
	else if(delta > 0){
		x1 = ((-b) + sqrt(delta)) / (2 * a);
		x2 = ((-b) - sqrt(delta)) / (2 * a);
		printf("%.2lf %.2lf" , x1 , x2);	
	}
}

