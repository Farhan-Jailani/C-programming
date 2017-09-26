#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int n;
scanf("%d",&n);
char a[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
if(n==0)
	{
	printf("zero");
	getch();
	return 0;
	}
if(n%100==0)
	{
	printf("%s hundred",a[n/100]);
	getch();
	return 0;
	}

if(n/100>=1)
	printf("%s hundred and ",a[n/100]);
char e[][10]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char t[][10]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int g=n%100;
if(g>10&&g<20)
	printf("%s",e[n%10-1]);
else if(g%10==0)
	printf("%s",t[(g/10)-1]);
else if(g/10==0&&g%10!=0)
	printf("%s",a[g%10]);
else
	printf("%s %s",t[(g/10)-1],a[g%10]);
getch();
return 0;
}
