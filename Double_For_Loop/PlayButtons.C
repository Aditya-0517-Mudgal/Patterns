#include<stdio.h>
#include<conio.h>
void main()
{  int i,j,N;
   clrscr();
   printf("Enter a number : ");
   scanf("%d",&N);
   for(i=1;i<=3*N;i++)
   {   printf("\n");
       for(j=1;j<=(2*N)-1;j++)
       {   printf("\t");
	   if(i<=N)
	   {   if(j<(2*N)-i)
	       printf(" ");
	       else
	       printf("*");
	   }
	   else if(i<=2*N)
	   {   if(i-j>=N+1)
	       printf("*");
	       else if(j>=i)
	       printf("*");
	       else if(j==N)
	       printf("|");
	       else
	       printf(" ");
	   }
	   else
	   {   if(i+j<=(3*N)+1)
	       printf("*");
	       else
	       printf(" ");
	   }
       }
   }
   getch();
}
