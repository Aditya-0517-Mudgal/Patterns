#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i=1,j,N;
    cout<<"Enter a number : ";
    cin>>N;
    for(j=1;j<=2*N-1;j++)
    {   if(i+j<=N || i-j>=N)
	   cout<<" ";
	else
	{   if(N%2==0)
	    {   if((i+j)%2==0)
		   cout<<" ";
		else
		{   cout<<"*";
		    if(j-i==N-1 || i+j==3*N-1)
		    {   if(i<2*N-1)
			{   cout<<"\n";
			    i++;
			    j=0;
			}
			else
			   break;
		    }
		}
	    }
	    else
	    {   if((i+j)%2!=0)
		   cout<<" ";
		else
		{   cout<<"*";
		    if(j-i==N-1 || i+j==3*N-1)
		    {   if(i<2*N-1)
			{  cout<<"\n";
			   i++;
			   j=0;
			}
			else
			   break;
		    }
		}
	    }
	}
    }
    getch();
}
