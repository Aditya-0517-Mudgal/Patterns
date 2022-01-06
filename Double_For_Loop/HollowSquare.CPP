#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i,j,N;
    cout<<"Enter a number : ";
    cin>>N;
    for(i=1;i<=N;i++)
    {   for(j=1;j<=N;j++)
	{   if(i==1 || i==N || j==1 || j==N)
	    {   if(j==N)
		{   cout<<"*\n";
		}
		else
		{   cout<<"*";
		}
	    }
	    else
	    cout<<" ";
	}
    }
    getch();
}
