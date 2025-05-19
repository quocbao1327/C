#include<stdio.h>
#include<math.h>
int main(){
	//chuyen so ngay sang so nam , so tuan , so ngay 
	// DIEU KIEN : 0 <= day <= 10^6
	int day , week = 0, year = 0;
	scanf("%d" , &day);
	while(day >= 365){
		year++;
		day -= 365;
	}
	printf("%d " , year);
	while(day >= 7){
		week++;
		day -= 7;
	}
	printf("%d " , week);
	printf("%d " , day);
	return 0;
}

