#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int n,i,max=0;
scanf("%d",&n);
if(n<=0)
	{
	printf("0");
	getch();
	return 0;
	}
int a[50],b[50];
for(i=0;i<n-1;i++)
	scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
	scanf("%d",&b[i]);
for(i=0;i<n-1;i++)
	{
	 if(i+1>max)
		max=i+1;
	 if((a[i]+i+1)>max)
		max=a[i]+i+1;
	 if((b[i]+i+1)>max)
		max=b[i]+i+1;
	}
if(i+1>max)
	max=i+1;
printf("%d",max);
getch();
return 0;
}