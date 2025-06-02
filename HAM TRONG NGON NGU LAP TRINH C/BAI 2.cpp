#include<stdio.h>
#include<math.h>
int main(){
	// BAI 2 : DOMINO
	//DIEU KIEN : 1 <= width <=  length <= 16
	int length , width;
	scanf("%d%d" , &length , &width);
	int ans = (length * width) / 2;
	printf("SO DOMINO THOA MAN DIEU KIEN LA : %d" , ans);
	return 0;
	// only 16 ?
}

