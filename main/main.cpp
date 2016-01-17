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
	void 读取键值缓冲区()
	switch(下一步方向)
	判断是否死亡
		判断是否撞墙
			是则跳出
		判断是否撞自身
			是则跳出
	判断下一步是否是食物
	结果 -> 更新位置
游戏结果显示

*/