#include<stdio.h>
int main()
{
	//두 정수에 대한 합계와 평균 출력
	//변수선언
	int x, y, sum;
	double avg;
	//변수 값 할당
	x = 3;
	y = 4;
	//처리(합계, 평균)
	sum = x + y;
	avg = sum / 2.0;
	//출력
	printf("합계 = %d\n", sum);
	printf("평균 = %f\n", avg);
}