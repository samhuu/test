//让一个空格周围所有连接在一起的空格都被赋上标记“9”
#include "stdio.h"
#define true 1
#define false 0
int holeSpread(int x, int y, int n, char **format)
{
	if ((x == n - 1 || format[x + 1][y] != '.') && (x == 0 || format[x - 1][y] != '.') && (y == n - 1 || format[x][y + 1] != '.') && (y == 0 || format[x][y - 1] != '.'))
		return true;
	if (x != n - 1 && format[x + 1][y] == '.')
	{
		format[x + 1][y] = '9';
		holeSpread(x + 1, y, n, format);
	}
	if (x != 0 && format[x - 1][y] == '.')
	{
		format[x - 1][y] = '9';
		holeSpread(x - 1, y, n, format);
	}
	if (y != n - 1 && format[x][y + 1] == '.')
	{
		format[x][y + 1] = '9';
		holeSpread(x, y + 1, n, format);
	}
	if (y != 0 && format[x][y - 1] == '.')
	{
		format[x][y - 1] = '9';
		holeSpread(x, y - 1, n, format);
	}
	return false;
}

int countHoles(int n, char **format)
{
	int holeNum = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			if (format[i][j] == '.')
			{
				format[i][j] = '9';//发现孔洞，用“9”标记
				while (!holeSpread(i, j, n, format));//用“9”填满这个孔洞
				holeNum++;
				countHoles(n,format);
			}
		}
	}
	return holeNum;
}


int main()
{
	int n;
	scanf("%d", &n);
	char format[n][n];
	int i, j;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
			scanf("%c\n", format[i][j]);
	}
	char* p=format[0];
	char*q=p;
	return countHoles(n, q);

}
