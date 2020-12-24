#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

void noelTree(int h)
{
    srand((int)time(0));
    int r;
    for(int i = 0; i < 1000; ++i){
        r = random(100,1000);
    }
	// draw body tree
	for(int i=1;i<=h;i++)
	{
		//draw space
		for(int j=1;j<=h-i;j++)
		{
			printf(" ");
		}
		//draw *
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	// draw root tree
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<h-2;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=3;k++)
		{
			printf("**");
		}
		printf("\n");
	}
	printf("**************************************");
	Sleep(r);
	system("cls");
}

int main()
{

    while(true){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		noelTree(20);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
		noelTree(20);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		noelTree(20);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
		noelTree(20);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		noelTree(20);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		noelTree(20);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
		noelTree(20);
	}

	return 1;

}
