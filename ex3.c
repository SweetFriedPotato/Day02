#include<stdio.h>
#define TAX_RATE 0.01
int main(void)
{
	//별다방 총 금액, 지불금액, 세금계산
	int total = 50000;
	double tax;
	double pay;

	//처리
	tax = total * TAX_RATE;
	pay = total + tax;

	//출력(영수증)
	printf("총금액:%d\n", total);
	printf("부가가치세:%.f\n", tax);
	printf("지불금액:%.f\n", pay);
	return 0;
}