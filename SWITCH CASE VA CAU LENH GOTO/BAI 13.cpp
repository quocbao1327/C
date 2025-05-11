#include<stdio.h>
#include<math.h>
int main(){
	long long a,b;
	scanf ("%lld %lld" , &a , &b);
	for(int i = a ; i >= 1 ; i--){
		if(i % b == 0) {
		   printf ("%d" , i);
		   break;	
		}
	}	
}

