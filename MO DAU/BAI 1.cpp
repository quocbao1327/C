#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,c,thuong,du;
	scanf("%lld%lld",&a,&b);
	thuong=a/b;
	du=a%b;
	printf("%lld %lld",thuong,du);
}

