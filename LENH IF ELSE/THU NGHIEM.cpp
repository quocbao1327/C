#include<stdio.h>
#include<math.h>
int main(){
	/*int n;
	scanf("%d",&n);
	if(n>=1 && n<5){
		printf("KEM");
	}
	else if(n>=5 && n<=7){
		printf("TRUNG BINH");
	}
	else if(n>7 && n<=9){
		printf("KHA");
	}
	else if(n==10){
		printf("XUAT SAC");
	}
	else{
		printf("KO HOP LE");
	}*/
	char kitu;
	scanf("%c",&kitu);
   //Chuyen in thuong sang in hoa
if(kitu>='a' && kitu<='z'){
       kitu-=32;
       printf("%c",kitu);
}

}

