#include<stdio.h>
#define COFFEE 1000
int main(void)
{
	//�̸�ù����, ����, ���, ������ ������ ���� �� ���
	//�������� �� �ʱ�ȭ
	char name = 'K';
	int age = 20;
	double avg = 95.5;
	char grade = 'A';
	//�������

	//������ ������ �ִ� ���� ���
	printf("name : %c\n", name);
	printf("age : %d\n", age);
	printf("avg: %.2f\n", avg);
	printf("grade: %c\n", grade); //char�� %d�� ����Ʈ�ϸ� �ƽ�Ű�ڵ尪 ����. 
}