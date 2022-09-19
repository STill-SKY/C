#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//定位文件指针
	//使指针偏移
	//SEEK_END定位到最后
	//SEEK_CUR定位到首位
	//SEEK_SET定位文件起始位置
	fseek(pf, 2, SEEK_SET );
	int ch = fgetc(pf);
	printf("%c",ch);
	//ftell获取该指针的偏移量
	int pos = ftell(pf);
	printf("%d", pos);
	//使指针回到初始位置
	rewind(pf);

	fclose(pf);
	pf = NULL;
	return 0;
}