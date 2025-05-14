#include<stdio.h>
#include<math.h>
int main(){
	// in ra chu cai ke tiep o dang thuong
	char n;
	scanf("%c" , &n);
	if(n == 'z' || n == 'Z'){
		printf("a");
	}
	else if(n >= 'a' && n <= 'y'){
		n += 1;
		printf("%c" , n);
	}
	else if(n >= 'A' && n <= 'Y'){
		n += 33;
		printf("%c" , n);
	}
	else{
		printf("INVALID");
	}
}

