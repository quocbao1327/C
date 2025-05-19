#include<stdio.h>
#include<math.h>
int main(){
	// BAI 29 : SO TRONG DOAN (a , b)
	//DIEU KIEN : 0 <= a , b <= 10^16
	double a , b ;//2 so thuc 
	long long i;
	scanf("%lf %lf" , &a , &b);
	a = ceil(a);//tra ve gia tri so nguyen nho nhat lon hon a
	b = floor(b);//tra ve gia tri so nguyen lon nhat nho hon b
	long long count = 0;
	for(i = a; i <= b ; i++){
		count++;
	}
	printf("%lld" , count);
	return 0;
}

