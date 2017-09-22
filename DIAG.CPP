#include<stdio.h>
#include<conio.h>
void print(int n);
main()
{
clrscr();
int n,a;
scanf("%d",&n);
if(n>0){
if(n%2==0)
	a=n/2;
else
	a=n/2+1;
int i=0;
for(i=0;i<a;i++)
	{
	print(i+1) ;
}
if(n%2==1)
	n--;
while(a){
	print(a--);
	}
	}
	getch();
	return 0;
}
void print(int n)
{
int i;
for(i=0;i<n;i++)
	printf("*");
printf("\n");
}