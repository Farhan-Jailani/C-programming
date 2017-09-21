#include<stdio.h>
#include<conio.h>
void print(int n,char c,int d);
main()
{
clrscr();
int n,i;
scanf("%d",&n);
int sp=n/2-1;
int star=1;
print(n/2+1,' ',1);
printf("#\n");
for(i=1;i<=n/2;i++)
	{
	print(sp,' ',1);
	print(1,'#',1);
	print(star,'*',2);
	print(1,'#',2);
	printf("\n");
	star++;
	sp--;
	}
star-=2;
sp+=2;
for(i=n/2-1;i>=1;i--)
	{
	print(sp,' ',1);
	print(1,'*',1);
	print(star,'#',2);
	print(1,'*',2);
	printf("\n");
	star--;
	sp++;
	}
print(n/2+1,' ',1);
printf("*");

getch();
return 0;
}
void print(int n,char c,int d)
{
int i;
for(i=0;i<n;i++)
	printf("%*c",d,c);
}