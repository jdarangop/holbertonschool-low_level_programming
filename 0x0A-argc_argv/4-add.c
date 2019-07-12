#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char* argv[])
{
	int num1, num2, i, count;
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	
	if (argc < 3)
	{
		if (argc == 1)
		{
			printf("0\n");
		}
		else if (num1 > 0 && num1 < 9)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", num1);
		}

		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			count += argv[i];
		}

		printf("%d\n", count);
		return (0);
	}
}
