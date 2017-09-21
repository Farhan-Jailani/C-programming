#include<stdio.h>
#include<conio.h>
int count(int a[],int i,int n);
int maxf(int b[],int n);
void set(int a[],int b[],int n,int num);
main()
{
clrscr();
int n;
scanf("%d",&n);
int a[40];
int b[40];
int i=0;
for(i=0;i<n;i++)
	scanf("%d",&a[i]);

for(i=0;i<n;i++)
	b[i]=count(a,i,n);
int k=maxf(b,n);
while(maxf(b,n)!=-1)
	{
	k=maxf(b,n);
	for(i=0;i<b[k];i++)
		printf("%d ",a[k]);
	set(a,b,n,a[k]);
	}
getch();
return 0;
}
int count(int a[],int i,int n)
{
int c=0;
int j=0;
for(j=0;j<n;j++)
	if(a[j]==a[i])
		c++;
return c;
}
int maxf(int b[],int n)
{
int i,max=b[0];
for(i=0;i<n;i++)
	if(b[i]>max)
		max=b[i];
for(i=0;i<n;i++)
	if(b[i]==max)
		break;
if(max==0)
	return -1;
return i;
}
void set(int a[],int b[],int n,int num)
{
int i;
for(i=0;i<n;i++)
	if(a[i]==num)
		b[i]=0;
}