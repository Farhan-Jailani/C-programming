#include<stdio.h>
#include<conio.h>
int check(char u[],char p[]);
int uexists(char u[]);
int login(char u[],char p[]);
int ucheck(char u[]);
int pcheck(char p[]);
int comp(char a[],char b[]);
int len(char a[]);
void sendmsg(char s[],char r[],char m[]);
struct user{
	int x;
	char u[10];
	char p[10];
	char fn[10];
	char ln[10];
	char g[7];
	int age;
	};
struct message{
	char m[100];
	char s[10];
	char r[10];
	};
main()
{
FILE *fp;
clrscr();
int n=1;
while(n)
	{
	clrscr();
	char u[10],p[10],username[10],password[10],fn[10],ln[10];
	int age;
	printf("1.Login 2.Sign up 0.exit");
	scanf("%d",&n);
	if(n==1)
		{
		printf("Username:");
		scanf("%s",u);
		printf("Password:");
		scanf("%s",p);
		if(check(u,p))
			{
			printf("Login Successful");
			int i=1;
			while(i)
				{
				i=login(u,p);
				}
			getch();
			}
		else

			{

			printf("Wrong username or password");
			getch();
			}
		}
	else if(n==2)
		{
		fp=fopen("user.dat","a+");
		struct user a;
		int i=1;
		while(i){
		printf("enter username:");
		scanf("%s",a.u);
		i=ucheck(a.u);
		}
		i=1;
		while(i){
		printf("enter password:");
		scanf("%s",a.p);
		i=pcheck(a.p)^1;
		}
		printf("enter first name:");
		scanf("%s",a.fn);
		printf("enter last name:");
		scanf("%s",a.ln);
		printf("enter age:");
		scanf("%d",&a.age);
		fwrite(&a,sizeof(struct user),1,fp);
		fclose(fp);
		printf("Account created");
		getch();
		}



	}
getch();
return 0;
}
int check(char u[],char p[])
{
FILE *fp;
fp=fopen("user.dat","r");
struct user a;
while(fread(&a,sizeof(struct user),1,fp))
	{
	if(comp(u,a.u)&&comp(p,a.p))
		{
		return 1;
		}
	}
fclose(fp);
return 0;
}
int comp(char a[],char b[])
{
if(len(a)!=len(b))
	{
	return 0;
	}
int n=len(a),i;
for(i=0;i<n;i++)
	if(a[i]!=b[i])
		return 0;
return 1;

}
int len(char a[])
{
int n=0,i;
for(i=0;a[i]!='\0';i++)
	n++;
return n;

}
int pcheck(char p[])
{
int c=0,c1=0;
if(len(p)<8)
	printf("The password should contain atleast 8 characters\n");
int i;
for(i=0;i<len(p);i++)
	{
	if(p[i]>='A'&&p[i]<='Z'||p[i]>='a'&&p[i]<='z')
		c++;
	if(p[i]>='0'&&p[i]<='9')
		c1++;
	}
if(c==0)
	printf("the password should contain atleast one alphabet\n");
if(c1==0)
	printf("the password should contain atleast one number\n");
if(len(p)<8||c==0||c1==0)
	return 0;
return 1;
}
int ucheck(char u[])
{
FILE *fp;
fp=fopen("user.dat","r");
struct user a;
while(fread(&a,sizeof(struct user),1,fp))
	{
	if(comp(u,a.u))
		{
		printf("username aldready exists\n");
		return 1;
		}
	}
return 0;
}
int login(char u[],char p[])
{
printf("1.compose 2.inbox 3.outbox 4.logout");
int n,i;
char r[10];
scanf("%d",&n);
if(n==1)
	{
	i=1;
	char m[100];
	while(i)
		{
		printf("enter username of reciever");
		scanf("%s",r);
		i=uexists(r);
		}
	getchar();
	scanf("%[^/n]s",m);
	sendmsg(u,r,m);
	printf("message sent!");
	}
return 0;
}