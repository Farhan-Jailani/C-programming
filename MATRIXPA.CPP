#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int n;
scanf("%d",&n);
int i,j;
for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
		{
		if(i>=j)
			printf("%4d",((i-1)*(i-1)+j));
		else
			printf("%4d",(j*j)-(i-1));
		}
	printf("\n");
	}


getch();
return 0;
}