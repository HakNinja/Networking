#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ip;
int checkip(char *);
char checkclass(int arr);

int main(){
  char arr[15];
  printf("ENTER IP :");
  scanf("%s",arr);

  if(checkip(arr)){
    printf("------VALID IP------");
    printf("\nIP BELONGS TO CLASS %c",ip);
    }
  else
    printf("------INVALID IP------");
  return 0;
  }

int checkip(char *ch){
  char a[5]="abcd";
  int no=0,i=0,n=0,j=0;
  for(;ch[i]!='\0';i++){
    if(!((ch[i]>='0' && ch[i]<='9') || ch[i]=='.'))
     return 0;
    if(n==4)
      return 0;
    if(ch[i]=='.'){
      n++;
      no=atoi(a);
      if((no<0) || (no>255))
        return 0;
      if(n==1)
        ip=checkclass(no);
        j=0;
        strcpy(a,"abcd");
      }
    else
      a[j++]=ch[i];
    }
  if(n==3){
    no=atoi(a);
  if((no<0) || (no>255))
    return 0;
    }
  else
    return 0;
  return 1;
  }

char checkclass(int ip_1){
  if (ip_1>=1 && ip_1<=126)
    return 'A';
  else if (ip_1>=128 && ip_1<=191)
    return 'B';
  else if (ip_1>=192 && ip_1<=223)
    return 'C';
  else if (ip_1>=224 && ip_1<=239)
    return 'D';
  else if (ip_1>=240 && ip_1<=255)
    return 'E';
  else{
    printf("use for localhost or loopback address\n");
    return 'A';
    }
  }
