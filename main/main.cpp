#include <stdio.h>
#include <conio.h>

#define MaxRow 20
#define MaxColumn 40

char Map[MaxRow][MaxColumn];



void Update()
{
	int i, j;
	/*for (i = 0; i < MaxColumn; i++)
	{
		Map[0][i] = '+';
		Map[MaxRow-1][i] = '+';
	}
	for (i = 0; i < MaxRow; i++)
	{
		Map[i][0] = '+';
		Map[i][MaxColumn-1] = '+';
	}*/
	for (i = 0; i < MaxRow; i++)
	{
		for (j = 0; j < MaxColumn; j++)
		{
			Map[i][j] = '.';
			printf_s("%c", Map[i][j]);
		}
		printf_s("\n");
	}
}

int main()
{
	Update();




	_getch();
	return 0;
}

/*

void ��ʾ��ͼ()
	void ��ʾ��()
	void ��ʾʳ��()
void ����()
	void ��ȡ��ֵ������()
	switch(��һ������)
	�ж��Ƿ�����
		�ж��Ƿ�ײǽ
			��������
		�ж��Ƿ�ײ����
			��������
	�ж���һ���Ƿ���ʳ��
	��� -> ����λ��
��Ϸ�����ʾ

*/