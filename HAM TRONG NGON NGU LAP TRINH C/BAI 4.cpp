#include<stdio.h>
#include<math.h>
int main(){
	// BAI 4 : FROG
	//tinh vi tri cua con ech sau so lan nhay
	// DIEU KIEN : 1 <= jump1 , jump2 , jump_attempts <= 10^9
	int jump1 , jump2 , jump_attempts ; 
	scanf("%d %d %d" , &jump1 , &jump2 , &jump_attempts);
	long long step = 0;
	while(jump_attempts != 0){
		if(jump_attempts % 2 != 0){
			step += jump1;
		}
		if(jump_attempts % 2 == 0){
			step -= jump2;
		}
		jump_attempts--;
	}
		printf("%lld" , step);
		return 0;
	}

