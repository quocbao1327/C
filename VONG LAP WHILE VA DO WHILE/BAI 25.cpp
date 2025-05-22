#include<stdio.h>
#include<math.h>
int main(){
	// BAI 25 : Kiem tra xem co phai tam giac ko?
	int a , b , c; // ba canh tam giac
	scanf("%d %d %d" , &a , &b , &c);
	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
		printf("YES");
	} 
	else{
		printf("NO");
	}
	return 0;
}

