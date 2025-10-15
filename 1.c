#include<stdio.h>
int main()
{
	int a = 0;
	while (1)
	{
		scanf_s("%d", &a);
		if (a == 1)
		{
			printf("hellowork\n");
		}
		else if (a == 0)
		{
			printf("HELLOWORK\n");
		}
		else if (a == -1)
		{
			break;
		}
	}
	return 0;
}

  
