#include<stdio.h>
#include<math.h>
int main(){
	// kiem tra so ngay trong thang
	int month , year;
	scanf("%d%d" , &month , &year);
	if(month < 1 || month > 12 || year <= 0){
		printf("INVALID");
	}
	else if( month == 2 && year % 100 !=0 && year % 4 == 0){
		printf("29");
	}
	else if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		printf("31");
	}
	else if( month == 4 || month == 6 || month == 9 || month == 11){
		printf("30");
	}
	else{
		printf("28");
	}
}

