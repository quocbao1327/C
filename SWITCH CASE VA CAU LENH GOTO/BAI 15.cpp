#include<stdio.h>
#include<math.h>
int ucln(int a , int b){
   if(a == 0 || b == 0){
      return a + b;
   }
   while(a != b){
      if(a > b){
         a = a - b; 
      }
      else{
         b = b - a; 
      }
   }
   return a;
}
int main(){
	// kiem tra uoc chung lon nhat
	long long number;
	scanf("%lld" , &number);
	if(number % gcd(3 , 5) == 0){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}

