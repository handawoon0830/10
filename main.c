#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE* fp; //���� �����Ϳ� �Լ� �̸� 
	char str[100];
	int i;
	//1. file open
	fp= fopen("sample.txt", "w");
	
	for ( i=0; i<3; i++)
	{
	
		printf("input a word:");
		scanf("%s", str); // str ��ü�� �����Ͷ� &�ʿ� ���� 
	//2. write file
		fprintf(fp, "%s\n", str);
	}
	//3. close file
	fclose(fp);
	return 0;
}
