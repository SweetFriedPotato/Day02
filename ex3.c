#include<stdio.h>
#define TAX_RATE 0.01
int main(void)
{
	//���ٹ� �� �ݾ�, ���ұݾ�, ���ݰ��
	int total = 50000;
	double tax;
	double pay;

	//ó��
	tax = total * TAX_RATE;
	pay = total + tax;

	//���(������)
	printf("�ѱݾ�:%d\n", total);
	printf("�ΰ���ġ��:%.f\n", tax);
	printf("���ұݾ�:%.f\n", pay);
	return 0;
}