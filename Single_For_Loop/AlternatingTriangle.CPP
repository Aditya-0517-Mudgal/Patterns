#include<iostream.h>
#include<conio.h>
void main()
{   int i,j=1,N;
    clrscr();
    cout<<"Enter a number : ";
    cin>>N;
    for(i=1;i<=2*N-1;i++)
    {   if((i+j)<N+1)
	{   cout<<" ";
	}
	else if((i+j)>=N+1 && (i-j)<=N-1)
	{   if(N%2==0)
	    {   if((i+j)%2==0)
		{   cout<<" ";
		}
		else
		{   cout<<"*";
		    if((i-j)==N-1)
		    {   if(j<N)
			{   cout<<"\n";
			    i=0;
			    j++;
			}
			else
			{   break;
			}
		    }
		}
	    }
	    else
	    {   if((i+j)%2!=0)
		{   cout<<" ";
		}
		else
		{   cout<<"*";
		    if((i-j)==N-1)
		    {   if(j<N)
			{   cout<<"\n";
			    i=0;
			    j++;
			}
			else
			{   break;
			}
		    }
		}
	    }
	}
    }
    getch();
}
