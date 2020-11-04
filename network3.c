#include<stdio.h>
int main()
{
char in[100];
printf("ENTER DATA: ");
scanf("%s",in);
printf("Data input=%s\n\n",in);
sleep(1);
printf("At sender:\n");
sleep(1);
printf("At application=%sAh\n",in);
sleep(1);
printf("At presentation=%sAhPh\n",in);
sleep(1);
printf("At session=%sAhPhSh\n",in);
sleep(1);
printf("At transport=%sAhPhShTh\n",in);
sleep(1);
printf("At network=%sAhPhShThNh\n",in);
sleep(1);
printf("At data link=dt%sAhPhShThNhDh\n",in);
sleep(1);
printf("At physical layer=10101001011010100101101010010\n",in);
sleep(1);
printf("\nAt Receiver:\n");
printf("At physical layer=10101001011010100101101010010\n",in);
sleep(1);
printf("At data link=dt%sAhPhShThNhDh\n",in);
sleep(1);
printf("At network=%sAhPhShThNh\n",in);
sleep(1);
printf("At transport=%sAhPhShTh\n",in);
sleep(1);
printf("At session=%sAhPhSh\n",in);
sleep(1);
printf("At presentation=%sAhPh\n",in);
sleep(1);
printf("At application=%sAh\n",in);
sleep(1);
printf("Data received=%s\n\n",in);
return 0;
}
