#include<stdio.h>
#include<math.h>
int main(){
	int number;
	long long sum = 0;
	scanf("%d" , &number);
	while(number != 0){
        sum += number % 10;
        number /= 10;
    }
	printf("%lld" , sum);
	return 0;
}

