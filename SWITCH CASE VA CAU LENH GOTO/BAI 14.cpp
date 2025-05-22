#include<stdio.h>

int main(){
	//so chia het nho nhat
	int a , b; // 2 so nguyen duong a,b
	scanf("%d %d" , &a , &b);
	for(int i = a ; i >= 1 ; i++ ){
		if(i % b == 0){
			printf("%d" , i);
			break;
		}
	}
	return 0;
}

