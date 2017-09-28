#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
char a[100],b[100];
a[0]=1;
a[1]='\0';
int c[100],d[100];
int k=0,i,j,n,bool=1,loo;
scanf("%d",&n);
if(n<=0)
	{
	getch();
	return 0;
	}
printf("  1\n");
for(loo=0;loo<n-1;loo++)
	{
	if(bool==1)
		{
		i=0;
		k=0;
		for(i=0;a[i]!='\0';i++)
			{
			j=1;
			while(a[i]==a[i+1])
				{
				i++;
				j++;
				}
			b[k++]=j;
			b[k++]=a[i];
			b[k]='\0';
			}

		for(i=0;b[i]!='\0';i++)
			printf("%3d",b[i]);
		printf("\n");
		bool=0;
		}
	else
		{
		i=0;
		k=0;
		for(i=0;b[i]!='\0';i++)
			{
			j=1;
			while(b[i]==b[i+1])
				{
				i++;
				j++;
				}
			a[k++]=j;
			a[k++]=b[i];
			a[k]='\0';
			}
		for(i=0;a[i]!='\0';i++)
			printf("%3d",a[i]);
		printf("\n");
		bool=1;
		}

	}
getch();
return 0;
}