#include<stdio.h>
#define TIME 60
int main()
{
	//변수선언
	int input, t, m, s;
	input = 3700;
	//계산
	s = input % TIME;
	t = m / TIME;
	m = input / TIME;

	//출력
	printf("%d시간 %d분 %d초\n",t, m, s);
}