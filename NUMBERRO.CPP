#include<stdio.h>
#include<conio.h>
int digit(long int n);
long int pow(long int a,long int n);
main()
{
clrscr();
long int n1,n2;
scanf("%ld %ld",&n1,&n2);
if(digit(n1)==digit(n2))
	{
	int num=digit(n1);
	int flag=0;
	long int n=num;
	while(n--)
		{
		int k=n2%10;
		n2=n2/10;
		n2=n2+(k*pow(10l,num-1));
		if(n2==n1)
			{
			flag=1;
			break;
			}
		}
	if(flag==0)
		{
		printf("NO");
		}
	else
		{
		printf("YES");
		}
	}
else
	printf("NOs");
getch();
return 0;
}
int digit(long int n)
{
int c=0;
while(n)
	{
	n=n/10;
	c++;
	}
return c;
}
long int pow(long int a,long int n)
{
long int pr=1;
int i=0;
for(i=0;i<n;i++)
	{
	pr*=a;
	}
return pr;
}