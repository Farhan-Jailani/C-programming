#include<stdio.h>
#include<conio.h>
int check(char a[][100],char b[][100],char in[],int n);
int cmp(char a[],char b[]);
int len(char a[]);
main()
{
clrscr();
char a[100][100],b[100][100];
int n=0,ch=1;
while(ch!=0)
	{
	scanf("%s %s",a[n],b[n]);
	n++;
	scanf("%d",&ch);
	}
char in[100];
scanf("%s",in);
int c=check(a,b,in,n);
printf("%d",c);
getch();
return 0;
}
int check(char a[][100],char b[][100],char in[],int n)
{
int c=0,i,j;
for(i=0;i<n;i++)
	{
	if(cmp(b[i],in))
		{
		for(j=0;j<n;j++)
			{
			if(cmp(a[i],b[j]))
				c++;
			}
		}
	}
return c;
}
int cmp(char a[],char b[])
{
int n1=len(a),n2=len(b);
if(n1!=n2)
	return 0;
else
	{
	int i;
	for(i=0;i<n1;i++)
		{
		if(a[i]!=b[i])
			return 0;
		}
	return 1;
	}
}
int len(char a[])
{
int c=0;
for(;a[c]!='\0';)
	c++;
return c;y
}