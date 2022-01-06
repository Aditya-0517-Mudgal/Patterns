#include<stdio.h>
#include<conio.h>
void main()
{   int i,j,N;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {   printf("\n");
	for(j=1;j<=2*N-1;j++)
	{   printf("\t");
	    if(i+j>=N+1 && j-i<=N-1)
	    printf("*");
	    else
	    printf(" ");
	}
    }
    getch();
}
