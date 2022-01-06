#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i,j,N;
    cout<<"Enter a number : ";
    cin>>N;
    for(i=1;i<=2*N-1;i++)
    {   cout<<"\n";
	for(j=1;j<=2*N-1;j++)
	{   if(i+j>=N+1 && j-i<=N-1 && i-j<=N-1 && i+j<=3*N-1)
	    {   cout<<"*";
	    }
	    else
	    {   cout<<" ";
	    }
	}
    }
    getch();
}
