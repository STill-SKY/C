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
	//��λ�ļ�ָ��
	//ʹָ��ƫ��
	//SEEK_END��λ�����
	//SEEK_CUR��λ����λ
	//SEEK_SET��λ�ļ���ʼλ��
	fseek(pf, 2, SEEK_SET );
	int ch = fgetc(pf);
	printf("%c",ch);
	//ftell��ȡ��ָ���ƫ����
	int pos = ftell(pf);
	printf("%d", pos);
	//ʹָ��ص���ʼλ��
	rewind(pf);

	fclose(pf);
	pf = NULL;
	return 0;
}