#include<stdio.h>
#include<math.h>
int main(){
	// BAI 3 : QUANG TRUONG
	// DIEU KIEN : 1 <= n , m , a <= 10^9
	//Tinh so vien da granite de lat quang truong
	int n , m , a;
	scanf("%d%d%d" , &n , &m , &a);
	long long first = n / a;
	long long second = m / a;
	if(n % a != 0){
		first++;
	}
	if(m % a != 0){
		second++;
	}
	printf("%lld" , first * second);
	return 0;
}

