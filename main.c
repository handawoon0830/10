#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	char src[] ="the worst things to eat before you sleep";
	char dst[100];
	
	strcpy(dst, src); //복사하는 문자역 <> 없이 이렇게 쓰면 됨. 
	

	printf("copied string : %s", dst);
	
}
