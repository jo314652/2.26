#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,num1;

	printf("�п�J��Ӿ�ơG");
	scanf_s("%d%d", &num,&num1);

	if ((num % num1) == 0)
	{
		printf("%d�O%d������\n",num,num1 );
	}
	else
	{
		printf("%d���O%d������\n", num, num1);
	}

	system("pause");
	return 0;
}