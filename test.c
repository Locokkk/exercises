//函数返回值是二进制位翻转后的值
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int val)
{
	unsigned int sum = 0;
	int i = 0;
	for ( i = 1;i <= 32;i++)
	{
		sum += ((val >> (i - 1)) & 1)*pow(2, 32 - i);
	}
	return sum;
}
int main()
{
	unsigned int val;
	scanf_s("%u", &val);
	printf("%u\n",reverse_bit(val) );
	system("pause");
}
