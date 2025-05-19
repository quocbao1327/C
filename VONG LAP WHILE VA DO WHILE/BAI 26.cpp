#include<stdio.h>
#include<math.h>
int main(){
	// kiem tra tam giac vuong,can,deu,thuong.
	// DIEU KIEN :  -10^6 <= a, b, c <= 10^6
	int a , b , c;
	scanf("%d%d%d" , &a , &b , &c);
	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
		if( a == b && b == c && a == c ){
			printf("DEU");
		}
		else if(a == b || a == c || b == c){
			printf("CAN");
		}
		else if(a + c == b + b || b + c == a + a || a + b == c + c){
			printf("VUONG");
		}
		else{
			printf("THUONG");
		}
	}
	else{
		printf("INVALID");
	}
	return 0;
}

