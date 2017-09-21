#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
int n=1;
int r1;
int c1;
int a[100][100];
int i=-1;
int j=0;
int size;
clrscr();
scanf("%d %d",&r,&c);
size=r*c;
r1=r;
c1=c-1;
while(n<=size)
	{
	int k;
	for(k=0;k<r1;k++)
		a[++i][j]=n++;
	r1--;
	if(n>size)
		break;
	for(k=0;k<c1;k++)
		a[i][++j]=n++;
	c1--;
	if(n>size)
		break ;
	for(k=0;k<r1;k++)
		a[--i][j]=n++;
	r1--;
	if(n>size)
		break;
	for(k=0;k<c1;k++)
		a[i][--j]=n++;
	c1--;
	}
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		printf("%3d  ",a[i][j]);
	printf("\n");
	}
	getch();
	}
