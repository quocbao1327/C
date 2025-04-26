#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	long long tong,hieu,tich;
	double thuong;
	scanf("%d%d",&a,&b);
	tong=a+b;
	hieu=a-b;
	tich=1ll*a*b;
	thuong=1.0*a/b;
	printf("%lld %lld %lld %.2lf",tong,hieu,tich,thuong);
}

