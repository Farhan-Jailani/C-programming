#include<stdio.h>
#include<conio.h>
int digit(int n);
int pow(int n);
int powsum(int n);
main()
{
clrscr();
int n1,n2;
scanf("%d %d",&n1,&n2);
if(n1>n2)
	{
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	}
int n;
scanf("%d",&n);
int dig=digit(n);
int k=n-powsum(dig-1);
while(dig)
	{
	 int a=pow(dig)-pow(dig-1);
	 if(k<=a/2)
		printf("%d",n1);
	 else
		{
		printf("%d",n2);
		k=k-a/2;
		}
	 dig--;

	}
getch();
return 0;
}
int digit(int n)
{
int a=2;
int c=0;
int sum=0;
while(sum<n)
	{
	sum+=a;
	a=a*2;
	c++;
	}
return c;
}
int pow(int n)
{
int i=1;
while(n--)
       i=i*2;
return i;
}
int powsum(int n)
{
int sum=0;
while(n)
	{
	sum+=pow(n--);
	}
return sum;
}