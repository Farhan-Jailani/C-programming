#include<stdio.h>
#include<conio.h>
int count(char a[]);
int check(char a[],char b[],int i);
main()
{
clrscr();
char a[20],b[20];
scanf("%s",a);
scanf("%s",b);
int i=0;
int n1=count(a);
int n2=count(b);
if(n1==n2)
	{
	int n=0;
	while(a[n]!='\0')
		{
		n++;
		}
	int j=n;
	for(i=0;i<n;i++)
		{
		a[j++]=a[i];
		}
	a[j]='\0';
	int flag=0;
	for(i=0;i<n;i++)
		{
		if(check(a,b,i))
			{
			flag=1;
			break;
			}
		}
	if(flag==1)
		printf("YES");
	else
		printf("NO");

	}
else
	printf("NOs");
getch();
return 0;
}
int count(char a[])
{
int i=0;
int c=0;
while(a[i]!='\0')
	{
	c++;
	i++;
	}
return c;
}
int check(char a[],char b[],int i)
{
int j,k=0,flag=1;
for(j=i;a[j]!='\0'&&b[k]!='\0';j++,k++)
	{
	if(a[j]!=b[k])
		{
		flag=0;
		break;
		}
	}
return flag;

}
