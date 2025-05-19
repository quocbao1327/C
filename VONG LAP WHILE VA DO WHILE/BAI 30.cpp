#include<stdio.h>
#include<math.h>
int main(){
	// BAI 30 : PHEP CHIA
	// DIEU KIEN : 1 <= a , b , c <= 10^16
	long long a , b , c;
	scanf("%lld %lld %lld" , &a , &b , &c);
	if(a / b == c || a / c == b || b / c == a){
		printf("/");//DIEU KIEN TRONG DE BAI
	}
	else{
		printf("NOSOL");// KO HIEU IN RA THE NAY LAM GI?
	}
	return 0;
}

