#include <stdio.h>

int main ()
{
	int n , x = 1 ;
	scanf_s("%d", &n);
	while (x <= n)
	{
		int y = 1;
		while (y <= n)
		{
			if (y == 1 || y == n || x == 1 || x == n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			 y = y + 1;
		}
		printf("\n");
		x = x + 1;
	}



}