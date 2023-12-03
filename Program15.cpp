#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
	{
	clrscr();
	int c, y;
	for (c=1;c<=7;c+=2)
		{
		for (y=0; y<c; y++)
			{
			printf("Hello ");
			}
		printf("\n");
		}
	getch();
	}
