#include<stdio.h>
#include<math.h>
int main(){
	// kiem tra chu so
	char n;
	scanf("%c" , &n);
	if(n >= '0' && n <= '9'){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}

