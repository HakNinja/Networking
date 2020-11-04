#include<stdio.h>
int main()
{
int in;
printf("ENTER THE NUMBERS OF NODES: ");
scanf("%d",&in);
printf("\nTOPOLOGY:\n");
printf("AT BUS :%d\n",in+1);
printf("AT STAR :%d\n",in);
printf("AT RING :%d\n",in);
printf("AT MESH :%d\n",in*(in-1)/2);


return 0;
}
