#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i=1,j,N;
    cout<<"Enter a number : ";
    cin>>N;
    for(j=1;j<=N;j++)
    {   if(i==1 || i==N || j==1 || j==N)
	{   cout<<"*";
	    if(j==N)
	    {   if(i<N)
		{   cout<<"\n";
		    i++;
		    j=0;
		}
		else
		{   break;
		}
	    }
	}
	else
	{   cout<<" ";
	}
    }
    getch();
}
