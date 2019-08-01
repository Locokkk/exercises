#include<stdio.h>
#include<math.h>
int main()
{
	int m, n, i;
	for (m = 101; m <= 200; m += 2)
	{
		i = sqrt(m);
		for (n = 2; n <= i; n++)
		{
			if (m%n == 0)
				break;
		}
		if (n > i)
			printf("%d ", m);
	}
	printf("\n");
	system("pause");
	return 0;
}