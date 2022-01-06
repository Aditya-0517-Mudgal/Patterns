#include<stdio.h>
#include<conio.h>
void main()
{   int i,j,N;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;i<=2*N-1;i++)
    {   printf("\n");
	for(j=1;j<=2*N-1;j++)
	{   printf("\t");
	    if(i<=N-1)
	    {   if(j-i>=0 && j+i<=2*N)
		{   if(i>1 && j-i>=1 && i+j<=2*N-1)
		    printf(" ");
		    else
		    printf("*");
		}
		else
		printf(" ");
	    }
	    else
	    {   if(i+j>=2*N && i-j>=0)
		printf("*");
		else
		printf(" ");
	    }
	}
    }
    getch();
}
