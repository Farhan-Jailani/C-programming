#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int n;
scanf("%d",&n);
int i,j;
int a[100];
int k=0,n1=-1,n2=0;
for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
		{
		 if(j==1)
			a[k++]=1;
		 else if(j==i)
			a[k++]=1;
		 else
			{
			a[k++]=a[n1++]+a[n2++];
			}
		 }
	n1++;
	n2++;
	}
int sp=n-1;
k=0;
for(i=1;i<=n;i++)
	{
	printf("%*c",sp--,' ');
	for(j=1;j<=i;j++)
		{
		printf("%-3d",a[k++]);
		}
	printf("\n");
	}
getch();
return 0;
}