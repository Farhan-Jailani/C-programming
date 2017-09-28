#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
char a[30];
int b[30],c[30];
int k=0,p=0,i,j;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
	{
	j=1;
	while(a[i]==a[i+1])
		{
		i++;
		j++;
		}
	b[k++]=j*(a[i]-96);
	c[p++]=a[i]-96;
	}
/*for(i=0;i<k;i++)
	{
	printf("%d  ",b[i]);
	printf("%d\n",c[i]);
	} */
int n;
scanf("%d",&n);
while(n--)
	{
	int v,flag=0;
	scanf("%d",&v);
	for(i=0;i<k;i++)
		if(b[i]==v||((v%c[i]==0)&&v<b[i]))
			{
			flag=1;
			break;
			}
	if(flag==0)
		printf("NO\n");
	else
		printf("YES\n");

	}
getch();
return 0;
}