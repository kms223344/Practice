#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
enum keyinput {
	L1 = 'z',
	L2 = 'x',
	R1 = '/',
	R2 = '.'
};
int amend()
{
	printf("열 번 입력하세요\n");
	int i = 10;
	int average = 0;
	while (i--)
	{
		int a, b;
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
		int result = (int)(b - a);
		printf("\t%dms\n", result);
		average += result;
		//printf("\r");
	}
	return average / 10;
}
int main()
{
	clock_t a, b;
	int avg;
	printf("시작");
	_getch();
	system("cls");
	printf("%d\n", avg = amend());
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
		int result = (int)(b - a);
		printf("\t%dms\t%g\n", result,(double)result/avg);
		//printf("\r");
	}
}