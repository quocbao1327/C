#include<stdio.h>
#include<math.h>
int main(){/*
	int point;
	scanf ("%d" , &point);
	if ( point >= 1 && point <= 5 ){
		printf ( "POINT F" );
	else if ( point > 5 && point <= 7 ) {
		printf ( "POINT C" );
	}
	else if ( point > 7 && point <= 9 ) {
		printf ( "POINT B" );
	}
	else if ( point == 10 ) {
		printf ( "POINT A" );
	}
	else {
		printf ( "INVALID POINT" );
	}*/
    char n;
    scanf ( "%c" , &n );
    if ( n >= 65 && n <= 90 ) {
    	printf ( "CAP LETTER" );
	}
	if ( n >= 97 && n <= 122) {
		printf ( "NORMAL LETTER" );
	}
}

