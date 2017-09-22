#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int n;
scanf("%d",&n);
char s[100];
scanf("%s",s);
char a[100][100];
char s1[100],s2[100];
int i,j;
int t=0;
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
		a[i][j]=s[t++];
		}
	}
int k=n*n;
int i1=-1,i2=-1,j1=-1,j2=-1;
int flag=1;
while(k)
	{
	for(i=0;i<n;i++)
		{
		i1++;
		j1++;
		i2++;
		j2++;
		k--;
		printf("%c %c\n",a[i1][j2],a[i2][j2]);
		if(a[i1][j1]!=a[i2][j1])
			{
			flag=0;
			break;
			}
		}
	if(flag==0||k==0)
		break;
	n--;
	for(i=0;i<n;i++)
		{
		j1--;
		i2--;
		k--;
		if(a[i1][j1]!=a[i2][j2])
			{
			flag=0;
			break;
			}
		}
	if(flag==0||k==0)
		break;
	n--;
	for(i=0;i<n;i++)
		{
		 i1--;
		 j2--;
		 k--;
		 if(a[i1][j1]!=a[i2][j2])
			{
			flag=0;
			break;
			}
		 }
	if(flag==0||k==0)
		break;
	n--;
	}
if(flag==0)
	printf("no");
else
	printf("yes");
getch();
return 0;
}