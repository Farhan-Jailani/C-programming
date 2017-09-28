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
char d[20];
int j=0,i;
char al[]={'z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y'};
while(dig--)
	{
	int a=n%26;
	if(a==0)
		n=n-26;
	d[j++]=al[a];
	n=n/26;

	}
for(i=j-1;i>=0;i--)
	printf("%c",d[i]);
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