#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct str
{
	char name[20] = {};
	int age;
	double s;
}str;

int main()
{
	str s = {0};
	FILE* pf = fopen("text.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}
	//�Զ����Ƶķ�ʽд���ʽ��������
	//fwrite(&s, sizeof(struct str), 1, pf);
	//�Զ����Ƶķ�ʽ��ȡ��ʽ��������
	fread(&s, sizeof(struct str), 1, pf);
	printf("%s %d %lf\n", s.name, s.age, s.s);
	fclose(pf);
	pf = NULL;
	return 0;
}