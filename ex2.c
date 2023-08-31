#include<stdio.h>
#define COFFEE 1000
int main(void)
{
	//이름첫글자, 나이, 평균, 학점을 변수에 저장 후 출력
	//변수선언 및 초기화
	char name = 'K';
	int age = 20;
	double avg = 95.5;
	char grade = 'A';
	//상수선언

	//변수가 가지고 있는 값을 출력
	printf("name : %c\n", name);
	printf("age : %d\n", age);
	printf("avg: %.2f\n", avg);
	printf("grade: %c\n", grade); //char을 %d로 프린트하면 아스키코드값 나옴. 
}