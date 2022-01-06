#include<stdio.h>
#include<conio.h>
void main()
{   int i,k=1,N;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {   printf("\t");
	if(i>=k)
	{   printf("*");
	    if(k==N)
	    {   break;
	    }
	    else if(i==N)
	    {   printf("\n");
		k++;
		i=0;
	    }
	}
	else
	printf(" ");
    }
    getch();
}
