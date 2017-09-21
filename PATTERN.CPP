#include<stdio.h>
#include<conio.h>
void dash(int n);
main()
{
clrscr();
int n;
scanf("%d",&n);
int i,sp=(n-1)*2;
for(i=n;i>0;i--)
	{
	dash(sp);
	printf("%c",96+n);
	int j;
	for(j=96+n-1;j>=(96+i);j--)
		printf("-%c",j);
	for(j=++j+1;j<=(96+n);j++)
		printf("-%c",j);
	dash(sp);
	sp=sp-2;
	printf("\n");
	}
	sp=2;
int ab=n-1;
for(i=1;i<=n;i++)
	{
	if(ab==0)
		break;
	ab--;
	dash(sp);
	printf("%c",96+n);
	int j;
	for(j=96+n-1;j>=96+i+1;j--)
		printf("-%c",j);
	for(j=++j+1;j<=96+n;j++)
		printf("-%c",j);
	dash(sp);
	sp=sp+2;
	printf("\n");
	}
getch();
return 0;
}
void dash(int n)
{
int i;
for(i=0;i<n;i++)
	printf("-");
}