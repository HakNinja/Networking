
//parity decide
#include<stdio.h>
int main()
{
int x=0,j,n;
printf("ENTER NUMBER :");
scanf("%d",&n);
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
printf("%s",x%2==0?"ODD PARITY":"EVEN PARITY");
return 0;
}

