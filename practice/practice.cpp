#include<stdio.h>
#include<conio.h>
int main()
{
	while (true)
	{
		char c = _getche();
		switch (c)
		{
		case 'z': printf("L1"); break;
		case 'x': printf("L2"); break;
		case '.': printf("R2"); break;
		case '/': printf("R1"); break;
		case 'q': return 0;
		}
		printf("\r");
	}
}