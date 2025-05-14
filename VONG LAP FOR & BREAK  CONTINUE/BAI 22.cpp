#include<stdio.h>
#include<math.h>
int main(){
	// chuyen ki tu hoa sang ki tu thuong , neu ko phai ki tu hoa thi ko thay doi ki tu ban dau
	char n;
	scanf("%c" , &n);
	if(n >= 'A' && n <= 'Z'){
		n += 32;
	}
	printf("%c" , n);
	return 0;
}

