#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,num1;

	printf("請輸入兩個整數：");
	scanf_s("%d%d", &num,&num1);

	if ((num % num1) == 0)
	{
		printf("%d是%d的倍數\n",num,num1 );
	}
	else
	{
		printf("%d不是%d的倍數\n", num, num1);
	}

	system("pause");
	return 0;
}