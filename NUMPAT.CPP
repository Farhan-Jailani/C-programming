#include<stdio.h>
#include<conio.h>
void print(int n,int i);
main()
{
clrscr();
int i,n,p=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	if(p==1)
		{
		print(i,n-1);
		print(i+1,1);
		printf("\n");
		}
	else
		{
		print(i+1,1);
		print(i,n-1);
		printf("\n");
		}
	p=p^1;
	}
getch();
return 0;
}
void print(int n,int i)
{
int j;
for(j=0;j<i;j++)
	printf("%d",n);
}