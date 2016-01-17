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

void 显示地图()
	void 显示蛇()
	void 显示食物()
void 运行()
	void 读取键值（）
		if（Is读取缓冲区)
			switch(下一步方向)
		设置下一步状态
死亡:
	if(Is撞墙 || Is撞自身)
		break;

	void 更新位置(Is是食物)
	
void 游戏结果显示()

*******更新位置方式*******
1：刷新整张画面
2：改变已经printf的画面上 具体的一个像素点

********蛇储存方式********
1：数组
2：链表
*/