#include<stdio.h>
#include<conio.h>
void main()
{   int i,j,N=4;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;i<=(2*N)-1;i++)
    {   printf("\n");
	for(j=1;j<=(2*N)-1;j++)
	{   printf("\t");
	    if(i==1 || i==(2*N)-1)
	    printf("%d",N);
	    else if(i==N/2 || i==(2*N)-2)
	    {   if(j==1 || j==(2*N)-1)
		printf("%d",N);
		else
		printf("%d",N-1);
	    }
	    else if(i==N+1 || i==N-1)
	    {   if(j==1 || j==(2*N)-1)
		printf("%d",N);
		else if(j==N/2 || j==(2*N)-2)
		printf("%d",N-1);
		else
		printf("%d",N-2);
	    }
	    else
	    {   if(j==1 || j==(2*N)-1)
		printf("%d",N);
		else if(j==N/2 || j==(2*N)-2)
		printf("%d",N-1);
		else if(j==N+1 || j==N-1)
		printf("%d",N-2);
		else
		printf("%d",N-3);
	    }
	}
    }
    getch();
}
