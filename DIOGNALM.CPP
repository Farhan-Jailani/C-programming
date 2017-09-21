#include<stdio.h>
#include<conio.h>
void print(int n,int i,int k);
void space(int n);
main()
{
clrscr();
int n;
scanf("%d",&n);
int i,m=1,sp=n-1;
for(i=1;i<=n;i++)
	{
	space(sp--);
	print(m,i,n-1);
	printf("\n");
	m=m+n;
	}
m=m-n+1;
sp=sp+2;
for(i=n-1;i>=1;i--)
	{
	space(sp++);
	print(m++,i,n-1);
	printf("\n");
	}
getch();
return 0;
}
void print(int n,int i,int k)
{
int j;
for(j=0;j<i;j++)
	{
	printf("%3d ",n);
	n=n-k;
	}
}
void space(int n)
{
int i;
for(i=0;i<n;i++)
	printf("  ");
}