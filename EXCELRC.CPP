#include<stdio.h>
#include<conio.h>
int digit(int n);
int pow(int a,int n);
main()
{
clrscr();
int n;
scanf("%d",&n);
int dig=digit(n);
while(dig--)
	{
	int a=n%26;
	printf("%c",64+(a%27));
	n=n/26;

	}
getch();
return 0;
}
int digit(int n)
{
int i=0,sum=0,c=0;
while(sum<n)
	{
	sum+=pow(26,i+1);
	i++;
	c++;
	}
return c;
}
int pow(int a,int n)
{
int i,p=1;
for(i=0;i<n;i++)
	{
	p*=a;
	}
return p;
}