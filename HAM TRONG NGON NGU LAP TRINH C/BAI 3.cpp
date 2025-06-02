#include<stdio.h>
#include<math.h>
int main(){
	// BAI 3 : QUANG TRUONG
	// DIEU KIEN : 1 <= length , width , stone_area <= 10^9
	//Tinh so vien da granite de lat quang truong
	int length , width , stone_area;
	scanf("%d%d%d" , &length , &width , &stone_area);
	long long first = width / stone_area;
	long long second = length / stone_area;
	if(length % stone_area != 0){
		first++;
	}
	if(width % stone_area != 0){
		second++;
	}
	printf("SO VIEN DA GRANITE CAN DE LAT KIN QUANG TRUONG LA : %lld" , first * second);
	return 0;
}

