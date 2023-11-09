#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE* fp; //파일 포인터와 함수 이름 
	char c;
	int i;
	//1. file open
	fp= fopen("sample.txt", "r");
		//2. write file
	if (fp==NULL)
	{
		printf("failed to open\n");
		return 0;
	}
	
	while ((c=fgetc(fp))!= EOF)
	{
		putchar(c);
	}
	//3. close file
	fclose(fp);
	return 0;
}
