#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int n,i,j;
scanf("%d",&n);
int a[10][10],b[10][10],c[100],k=0;
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
int jum;
scanf("%d",&jum);
int ii,jj,f;
int mb=n;
for(i=0;i<n/2;i++)
	{
	k=0;
	ii=i;
	jj=i;
	for(f=0;f<mb;f++)
		c[k++]=a[ii][jj++];
	jj--;
	ii++;
	for(f=0;f<mb-1;f++)
		c[k++]=a[ii++][jj];
	ii--;
	jj--;
	for(f=0;f<mb-1;f++)
		c[k++]=a[ii][jj--];
	jj++;
	ii--;
	for(f=0;f<mb-2;f++)
		c[k++]=a[ii--][jj];
	 int num=mb*4-4;



	 int jump=num-jum%num;
	 ii=i;
	jj=i;
	for(f=0;f<mb;f++)
		a[ii][jj++]=c[jump++%num];
	jj--;
	ii++;
	for(f=0;f<mb-1;f++)
		a[ii++][jj]=c[jump++%num];
	ii--;
	jj--;
	for(f=0;f<mb-1;f++)
		a[ii][jj--]=c[jump++%num];
	jj++;
	ii--;
	for(f=0;f<mb-2;f++)
		a[ii--][jj]=c[jump++%num];
	 mb=mb-2;

	}
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		printf("%3d",a[i][j]);
	printf("\n");
	}
getch();
return 0;
}