//parity check
#include<stdio.h>
#include<string.h>
int main()
{
int p,c=0,l;
char ch[20];
printf("ENTER THE DATA WITH PARITY BIT: ");
scanf("%s",ch);
printf("\nPARITY MODE  : 1 for even,0 for odd \n   :");
scanf("%d",&p);
l=strlen(ch);
if (p==1)
{
printf("EVEN PARITY IS IN USED...");
for (int i=0;i<l;i++)
{
if (ch[i]=='1')
c++;
}
if (c%2==0)
printf("NO ERROR");
else
printf("ERROR!!");
}
else if (p==0)
{
printf("ODD PARITY IS IN USED...");
for (int i=0;i<l;i++)
{
if (ch[i]=='1')
c++;
}
if ((c%2)!=0)
printf("NO ERROR");
else
printf("ERROR!!");
}
else
printf("ENTERED VALID PARITY");
return 0;
}
