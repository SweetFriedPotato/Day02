#include<stdio.h>
int main()
{
	int x = 10, y = 10;
	int result;
	result = x++;
	printf("x=%d, y=%d, result=%d", x, y, result);
	result = ++y;
	printf("x=%d, y=%d, result=%d", x, y, result);
}
//�߰���� ���� ���´� !!!!!!!!!!