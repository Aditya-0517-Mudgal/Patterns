#include<stdio.h>
#include<conio.h>
void main()
{   int a,i,j,x=1,N;
    char y='A';
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {   printf("\n");
	for(j=1;j<=2*N-1;j++)
	{   printf("\t");
	    if((i+j)>=N+1 && (j-i)<=N-1)
	    {   if(N%2==0)
		{   if((i+j)%2==0)
		    printf(" ");
		    else
		    {   if((i%2)!=0)
			{   printf("%d",x);
			    x++;
			}
			else
			{   printf("%c",y);
			    y++;
			}
		    }
		}
		else
		{   if((i+j)%2!=0)
		    printf(" ");
		    else
		    {   if((i%2)!=0)
			{   printf("%d",x);
			    x++;
			}
			else
			{   printf("%c",y);
			    y++;
			}
		    }
		}
	    }
	    else
	    printf(" ");
	}
	x=1;
	y='A';
    }
    getch();
}
