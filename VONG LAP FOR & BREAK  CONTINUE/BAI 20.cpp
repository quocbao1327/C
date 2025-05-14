#include<stdio.h>
#include<math.h>
int main(){
	//kiem tra chu cai thuong va chu cai hoa
	char n;
	scanf("%c" , &n);
	if((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
