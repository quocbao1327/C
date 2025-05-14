#include<stdio.h>
#include<math.h>
int main(){
	//kiem tra chu cai thuong
	char n;
	scanf("%c" , &n);
	if(n >= 'a' && n <= 'z'){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;;
}

