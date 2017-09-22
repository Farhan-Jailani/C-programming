#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int n,i,j,k=0;
scanf("%d",&n);
char b[100];
scanf("%s",b);
char a[100][100];
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		a[i][j]=b[k++];
int flag=1;
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		if(a[i][j]!=a[j][i])
			{
			flag=0;
			break;
			}
	if(flag==0)
		break;
	}
if(flag==0)
	printf("no");
else
	printf("yes");
getch();
return 0;
}