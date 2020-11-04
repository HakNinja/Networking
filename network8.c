
//parity decide and print data representation
#include<stdio.h>
void show(int);
int main()
{
int x=0,j,n;
printf("ENTER NUMBER :");
scanf("%d",&n);
show(n);
if(n<0)
{
x++;
j=(sizeof(int)*8)-1;
j=-1<<j;
j=~j;
n=j&n;
}
while(n)
{
if(n&1)
x++;
n=n>>1;
}
printf("\n%s",x%2==0?"ODD PARITY":"EVEN PARITY");
return 0;
}
void show(int a)
{int x=1;
int y=sizeof(a)*8;
x=x<<y-1;
while(y--)
{
if(x&a)
printf("1");
else
printf("0");
a=a<<1;
}
}
