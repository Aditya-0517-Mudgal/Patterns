#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int i=1,j,c=1,N;
    cout<<"Enter a number : ";
    cin>>N;
    for(j=1;j<=N;j++)
    {   if(j<=i)
	{  if(i%2!=0)
	   {  cout<<c++;
	   }
	   else
	   {  cout<<"*";
	   }
	}
	else
	{  cout<<"\n";
	   j=0;
	   i++;
	}
    }
    getch();
}