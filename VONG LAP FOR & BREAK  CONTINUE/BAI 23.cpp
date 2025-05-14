#include<stdio.h>
#include<math.h>
int main(){
	// chuyen ki tu thuong sang ki tu hoa , neu ko phai ki tu thuong thi ko thay doi ki tu ban dau
	char n;
	scanf("%c" , &n);
	if(n >= 'a' && n <= 'z'){
		n -= 32;
	}
	printf("%c" , n);
}

