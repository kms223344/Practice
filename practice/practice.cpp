#include<stdio.h>
#include<conio.h>
#include<time.h>
enum keyinput {
	L1 = 'z',
	L2 = 'x',
	R1 = '/',
	R2 = '.'
};
int main()
{
	clock_t a, b;
	while (true)
	{
		a = clock();
		char c = _getch();
		b = clock();
		switch (c)
		{
		case L1: printf("L1"); break;
		case L2: printf("L2"); break;
		case R2: printf("R2"); break;
		case R1: printf("R1"); break;
		case 'q': return 0;
		}
		double result = (double)(b - a);
		printf("\t%gms\n", result);
		//printf("\r");
	}
}