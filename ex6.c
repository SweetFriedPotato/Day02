#include<stdio.h>
#define TIME 60
int main()
{
	//��������
	int input, t, m, s;
	input = 3700;
	//���
	s = input % TIME;
	t = m / TIME;
	m = input / TIME;

	//���
	printf("%d�ð� %d�� %d��\n",t, m, s);
}