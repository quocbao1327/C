#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	long long S;
	scanf("%d%d%d",&a,&b,&c);
	S=a*(b+c)+b*(a+c);
	printf("%lld",S);
}

