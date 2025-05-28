#include<stdio.h>
#include<math.h>
long long sum(int number){
	long long tong = 0;
	for(int i = 1 ; i <= number ; i++) tong += i;
	return tong;
}
int main(){
	int number = 12345;
	long long result = sum(number);
	printf("%lld" , result);
	return 0;
}
// just a test code , only for trying code in video , not for anything else!

