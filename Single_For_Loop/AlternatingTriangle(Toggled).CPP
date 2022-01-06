#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i,j=1,k=1,N;
    cin>>N;
    for(i=1;i<=2*N-1;i++)
    {   if(i+j<N+1)
	{   cout<<" ";
	}
	else if(i+j>=N+1 && i-j<=N-1)
	{   if(k)
	    {   cout<<"*";
	    }
	    else
	    {   cout<<" ";
	    }
	    k=1-k;
	}
	else
	{   cout<<"\n";
	    i=0;
	    j++;
	    k=1;
	}
    }
    getch();
}
