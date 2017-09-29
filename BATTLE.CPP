#include<stdio.h>
#include<conio.h>
void setzero(int a[][100],int m,int n);
void display(int a[][100],int m,int n);
int digit(char a[]);
void left(int a[][100],int x,int y,int dig);
void right(int a[][100],int x,int y,int dig,int n);
void down(int a[][100],int x,int y,int dig,int m);
void up(int a[][100],int x,int y,int dig);
void TRD(int a[][100],int x,int y,int dig,int n);
void BRD(int a[][100],int x,int y,int dig,int m,int n);
void TLD(int a[][100],int x,int y,int dig);
void BLD(int a[][100],int x,int y,int dig,int m);
void FD(int a[][100],int x,int y,int dig,int m,int n);
void TB(int a[][100],int x,int y,int dig,int n);
void BB(int a[][100],int x,int y,int dig,int m,int n);
void LB(int a[][100],int x,int y,int dig,int m);
void RB(int a[][100],int x,int y,int dig,int m,int n);
void SB(int a[][100],int x,int y,int dig,int m,int n);
void check(int a[][100],int m,int n);
int b[100][100];
main()
{
clrscr();
int m,n,x,y;
char w[10];
printf("Enter the size of the Battlefield");
scanf("%d %d",&m,&n);
int a[100][100];
setzero(a,m,n);
setzero(b,m,n);
display(a,m,n);
char k='y';
while(k=='y'||k=='Y')
	{
	printf("enter shooter location");
	scanf("%d %d",&x,&y);
	printf("enter weapon details");
	scanf("%s",w);
if(w[0]=='H')
	{
	int dig=digit(w);
	if(w[1]=='1')
		right(a,x,y,dig,n);
	else if(w[1]=='2')
		left(a,x,y,dig);
	else if(w[1]=='3')
		{
		left(a,x,y,dig);
		right(a,x,y,dig,n);
		}
	}
else if(w[0]=='V')
	{
	int dig=digit(w);
	if(w[1]=='1')
		down(a,x,y,dig,m);
	else if(w[1]=='2')
		up(a,x,y,dig);
	else if(w[1]=='3')
		{
		up(a,x,y,dig);
		down(a,x,y,dig,m);
		}
	}
else if(w[0]=='D')
	{
	int dig=digit(w);
	if(w[1]=='1')
		TRD(a,x,y,dig,n);
	else if(w[1]=='2')
		BRD(a,x,y,dig,m,n);
	else if(w[1]=='3')
		TLD(a,x,y,dig);
	else if(w[1]=='4')
		BLD(a,x,y,dig,m);
	else if(w[1]=='5')
		{
		FD(a,x,y,dig,m,n);
		}
	}
else if(w[0]=='B')
	{
	int dig=digit(w);
	if(w[1]=='1')
		TB(a,x,y,dig,n);
	else if(w[1]=='2')
		BB(a,x,y,dig,m,n);
	else if(w[1]=='3')
		LB(a,x,y,dig,m);
	else if(w[1]=='4')
		RB(a,x,y,dig,m,n);
	else if(w[1]=='5')
		{
		SB(a,x,y,dig,m,n);
		}
	}
	check(a,m,n);
	display(a,m,n);
	printf("continue??");
	k=getch();
	printf("\n");
	}
display(a,m,n);
getch();
return 0;
}
void setzero(int a[][100],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		a[i][j]=0;
		}
	}


}
void display(int a[][100],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("%3d",a[i][j]);
		}
	printf("\n");
	}


}
int digit(char a[])
{
int n=0;
while(a[n]!='\0')
	n++;
int sum=0,i;
for(i=2;i<n;i++)
	{
	sum=10*sum+(a[i]-48);
	}
return sum;
}
void right(int a[][100],int x,int y,int dig,int n)
{
int i;
for(i=y+1;i<n&&i<y+dig+1;i++)
	if(b[x][i]==1)
		{
		printf("Cannot attack captured territory");
		return;
		}
for(i=y+1;i<n&&i<y+dig+1;i++)
	a[x][i]++;
}
void left(int a[][100],int x,int y,int dig)
{
int i;
for(i=y-1;i>=0;i--)
	{
	if(i<y-dig)
		break;
	if(b[x][i]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	}
for(i=y-1;i>=0;i--)
	{
	if(i<y-dig)
		break;
	a[x][i]++;
	}
}
void down(int a[][100],int x,int y,int dig,int m)
{
int i;
for(i=x+1;i<m&&i<x+dig+1;i++)
	if(b[i][y]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
for(i=x+1;i<m&&i<x+dig+1;i++)
	a[i][y]++;
}
void up(int a[][100],int x,int y,int dig)
{
int i;
for(i=x-1;i>=0;i--)
	{
	if(i<x-dig)
		break;
	if(b[i][y]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	}
for(i=x-1;i>=0;i--)
	{
	if(i<x-dig)
		break;
	a[i][y]++;
	}
}
void TLD(int a[][100],int x,int y,int dig)
{
x--;
y--;
int f=dig,g=x,h=y;
while(f--)
	{
	if(g<0||h<0)
		break;
	if(b[g][h]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	g--;
	h--;
	}
while(dig--)
	{
	if(x<0||y<0)
		break;
	a[x][y]++;
	x--;
	y--;
	}
}
void TRD(int a[][100],int x,int y,int dig,int n)
{
x--;
y++;
int f=dig,g=x,h=y;
while(f--)
	{
	if(g<0||h==n)
		break;
	if(b[g][h]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	g--;
	h++;
	}
while(dig--)
	{
	if(x<0||y==n)
		break;
	a[x][y]++;
	x--;
	y++;
	}
}
void BLD(int a[][100],int x,int y,int dig,int m)
{
x++;
y--;
int f=dig,g=x,h=y;
while(f--)
	{
	if(g==m||h<0)
		break;
	if(b[g][h]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	g++;
	h--;
	}
while(dig--)
	{
	if(x==m||y<0)
		break;
	a[x][y]++;
	x++;
	y--;
	}
}
void BRD(int a[][100],int x,int y,int dig,int m,int n)
{
x++;
y++;
int f=dig,g=x,h=y;
while(f--)
	{
	if(g==m||h==n)
		break;
	if(b[g][h]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	g++;
	h++;
	}
while(dig--)
	{
	if(x==m||y==n)
		break;
	a[x][y]++;
	x++;
	y++;
	}
}
void TB(int a[][100],int x,int y,int dig,int n)
{
if(b[x][y]==1)
	{
	printf("cannot attack captured territory");
	return;
	}
a[x][y]++;
int c1,c2,k=1,l=dig,o=x,p=y;
while(l--)
	{
	o--;
	if(o<0)
		break;
	c1=p-k;
	c2=p+k;
	int i;
	for(i=c1;i<=c2;i++)
		{
		if(i<0)
			continue;
		if(i==n)
			break;
		if(b[o][i]==1)
			{
			printf("cannot attack enemy territory");
			return;
			}
		}
	k++;
	}
k=1;
while(dig--)
	{
	x--;
	if(x<0)
		break;
	c1=y-k;
	c2=y+k;
	int i;
	for(i=c1;i<=c2;i++)
		{
		if(i<0)
			continue;
		if(i==n)
			break;
		a[x][i]++;
		}
	k++;
	}
}
void BB(int a[][100],int x,int y,int dig,int m,int n)
{
if(b[x][y]==1)
	{
	printf("cannot attack captured territory");
	return;
	}
a[x][y]++;
int c1,c2,k=1,o=x,p=y,l=dig;
while(l--)
	{
	o++;
	if(o==m)
		break;
	c1=p-k;
	c2=p+k;
	int i;
	for(i=c1;i<=c2;i++)
		{
		if(i<0)
			continue;
		if(i==n)
			break;
	       if(b[o][i]==1)
			{
			printf("cannot attack captured territory");
			return;
			}
		}
	k++;
	}
k=1;
while(dig--)
	{
	x++;
	if(x==m)
		break;
	c1=y-k;
	c2=y+k;
	int i;
	for(i=c1;i<=c2;i++)
		{
		if(i<0)
			continue;
		if(i==n)
			break;
		a[x][i]++;
		}
	k++;
	}
}
void LB(int a[][100],int x,int y,int dig,int m)
{
if(b[x][y]==1)
	{
	printf("cannot attack captured territory");
	return;
	}
a[x][y]++;
int c1,c2,k=1,l=dig,o=x,p=y;
while(l--)
	{
	p--;
	if(p<0)
		break;
	c1=o-k;
	c2=o+k;
	int i;
	for(i=c1;i<=c2;i++)
		{
		if(i<0)
			continue;
		if(i==m)
			break;
		if(b[i][p]==1)
			{
			 printf("cannot attack capturred territory");
			 return;
			}
		}
	k++;
	}
k=1;
while(dig--)
	{
	y--;
	if(y<0)
		break;
	c1=x-k;
	c2=x+k;
	int i;
	for(i=c1;i<=c2;i++)
		{
		if(i<0)
			continue;
		if(i==m)
			break;
		a[i][y]++;
		}
	k++;
	}
}
void RB(int a[][100],int x,int y,int dig,int m,int n)
{
if(b[x][y]==1)
	{
	printf("cannot attack captured territory");
	return;
	}
a[x][y]++;
int c1,c2,k=1,l=dig,o=x,p=y;
while(l--)
	{
	p++;
	if(p==n)
		break;
	c1=o-k;
	c2=o+k;
	int i;
	for(i=c1;i<=c2;i++)
		{
		if(i<0)
			continue;
		if(i==m)
			break;
		if(b[i][p]==1)
			{
			printf("cannot attack captured territory");
			return;
			}
		}
	k++;
	}
k=1;
while(dig--)
	{
	y++;
	if(y==n)
		break;
	c1=x-k;
	c2=x+k;
	int i;
	for(i=c1;i<=c2;i++)
		{
		if(i<0)
			continue;
		if(i==m)
			break;
		a[i][y]++;
		}
	k++;
	}
}
void SB(int a[][100],int x,int y,int dig,int m,int n)
{
if(b[x][y]==1)
	{
	printf("cannot attack captured territory");
	return;
	}
int a1=x-dig,a2=x+dig,b1=y-dig,b2=y+dig,i,j;
for(i=a1;i<=a2;i++)
	{
	if(i<0)
		continue;
	if(i==m)
		break;
	for(j=b1;j<=b2;j++)
		{
		if(j<0)
			continue;
		if(j==n)
			break;
		if(b[i][j]==1)
			{
			printf("cannot attack captured territory");
			return;
			}
		}
	}
a1=x-dig;
a2=x+dig;
b1=y-dig;
b2=y+dig;
for(i=a1;i<=a2;i++)
	{
	if(i<0)
		continue;
	if(i==m)
		break;
	for(j=b1;j<=b2;j++)
		{
		if(j<0)
			continue;
		if(j==n)
			break;
		a[i][j]++;
		}
	}
}
void check(int a[][100],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
	{
	int flag=1;
	for(j=0;j<n;j++)
		if(a[i][j]<5)
			{
			flag=0;
			break;
			}
	if(flag==1)
		for(j=0;j<n;j++)
			{
			a[i][j]=8;
			b[i][j]=1;
			}
	}
for(i=0;i<n;i++)
	{
	int flag=1;
	for(j=0;j<m;j++)
		if(a[j][i]<5)
			{
			flag=0;
			break;
			}
	if(flag==1)
		for(j=0;j<m;j++)
			{
			a[j][i]=8;
			b[j][i]=1;
			}
	}
}
void FD(int a[][100],int x,int y,int dig,int m,int n)
{
int f=dig,g=x-1,h=y-1;
while(f--)
	{
	if(g<0||h<0)
		break;
	if(b[g][h]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	g--;
	h--;
	}
f=dig;
g=x-1;
h=y+1;
while(f--)
	{
	if(g<0||h==n)
		break;
	if(b[g][h]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	g--;
	h++;
	}
f=dig;
g=x+1;
h=y-1;
while(f--)
	{
	if(g==m||h<0)
		break;
	if(b[g][h]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	g++;
	h--;
	}
f=dig;
g=x+1;
h=y+1;
while(f--)
	{
	if(g==m||h==n)
		break;
	if(b[g][h]==1)
		{
		printf("cannot attack captured territory");
		return;
		}
	g++;
	h++;
	}
TRD(a,x,y,dig,n);
BRD(a,x,y,dig,m,n);
TLD(a,x,y,dig);
BLD(a,x,y,dig,m);
}