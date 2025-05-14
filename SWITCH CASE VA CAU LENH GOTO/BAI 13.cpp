#include<stdio.h>

int main(){
	long long a,b; //2 so nguyen a,b (a > b ; 1 <= b <= a <= 10^8 )
	scanf ("%lld %lld" , &a , &b);
	for(int i = a ; i >= 1 ; i--){
		if(i % b == 0) {
		   printf ("%d" , i);
		   break;	
		}
	}	
	return 0;
}

