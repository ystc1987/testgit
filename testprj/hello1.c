#include <stdio.h>

void main(void)
{
	while(1)
	{
		printf("hello world!");
		int c = getchar();
		if (c == 'x' )
			break ;
	}
}

