#include<stdio.h>
#include<conio.h>
int len(char a[]);
void check(char b[],char c[],int i,int n,int n1);
main()
{
clrscr();
char a[100],b[100],c[10];
gets(a);
gets(c);
int n=len(a);
int n1=len(c);
int j=0,i;
for(i=0;i<n;i++)
	{
	if(a[i]!=' ')
		b[j++]=a[i];
	}
n=len(b);
for(i=0;i<n;i++)
	{
	check(b,c,i,n,n1);
	}
	a[0]='\0';
getch();
return 0;
}
int len(char a[])
{
int c=0,i=0;
for(i=0;a[i]!='\0';i++)
	c++;
return c;
}
void check(char b[],char c[],int i,int n,int n1)
{
int j,flag=1;

if((i+n1-1)<n)
	{
	int k=0;
	for(j=i;j<(i+n1);j++)
		{
		if(b[j]!=c[k++])
			{
			flag=0;
			break;
			}
		}
	if(flag==1)
	print(i,n,n1);
	}
flag=1;
if((i-n1+1)>=0)
	{
	int k=0;
	for(j=i;j>=(i-n1+1);j--)
		{
		if(b[j]!=c[k++])
			{
			flag=0;
			break;
			}
		}
       if(flag==1)
		print(i,n,n1);
	}
flag=1;
if((i+(n1*5))<n)
	{
	int k=0;
	for(j=i;j<(i+(n1*5));j=j+5)
		{
		if(b[j]!=c[k++])
			{
			flag=0;
			break;
			}
		}
	if(flag==1)
		print(i,n,n1);
	}
if((i-((n1-1)*5))>=0)
	{
	int k=0;
	for(j=i;j>=(i-((n1-1)*5));j=j-5)
		{
		if(b[j]!=c[k++])
			{
			flag=0;
			break;
			}
		}
	print(i,n,n1);
	}
}