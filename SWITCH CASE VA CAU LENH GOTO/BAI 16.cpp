#include<stdio.h>
#include<math.h>
int main(){
	//kiem tra nam nhuan
	int number;
	scanf("%d" , &number);
	if(number < 0 && number == 0){
		printf("INVALID");
	}
	else if(number % 4 == 0 && number % 100 != 0){
		printf("YES");
	}
	else{
		printf("NO");
	}
}

