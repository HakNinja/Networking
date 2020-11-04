//Including header file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//some global variable and function
char ip;
int checkip(char *);
char checkclass(int arr);

// main function
int main(){
  // for store ip
  char arr[15];
  printf("ENTER IP :");
  scanf("%s",arr);

  //checking as its is a valid ip or not and check its class if valid 
  if(checkip(arr)){
    printf("------VALID IP------");
    printf("\nIP BELONGS TO CLASS %c\n",ip);
    }
  else
    printf("------INVALID IP------\n");
  return 0;
  }

// check ip function
int checkip(char *ch){
  // initial value as string to protect them from having a number as garbage value
  char a[5]="abcd";
  int no=0,i=0,n=0,j=0;
  //loop to check index of the ip entered as string
  for(;ch[i]!='\0';i++){
    // invalid for character value
     if(!((ch[i]>='0' && ch[i]<='9') || ch[i]=='.'))                                           
       return 0; 
    // 'n' define the dot as there should be only 3 dot between the each octal
    if(n==4)
      return 0;
      // separate the number (character) from string  
    if(ch[i]=='.'){
      n++;
      // convert the string before the dot into number  
      no=atoi(a);
      // checking the range 
      if((no<0) || (no>255))
        return 0;
        //check class
      if(n==1)
        ip=checkclass(no);
        // for start the loop after ever dot
        j=0;
        // again initiate value as string to protect them from getting a number by the loop 
        strcpy(a,"abcd");
      }
    else
      a[j++]=ch[i]; // getting number as character
    }
    // for the last octal
  if(n==3){
    no=atoi(a);
  if((no<0) || (no>255))
    return 0;
    }
  else
    return 0;
  return 1;
  }

// check class of respective ip
char checkclass(int ip_1){
  if (ip_1>=0 && ip_1<=126) // for class 'A'
    return 'A';
  else if (ip_1>=128 && ip_1<=191) // for class 'B'
    return 'B';
  else if (ip_1>=192 && ip_1<=223) // for class 'C'
    return 'C';
  else if (ip_1>=224 && ip_1<=239) // for class 'D'
    return 'D';
  else if (ip_1>=240 && ip_1<=255) // for class 'E'
    return 'E';
  else{
    printf("use for localhost or loopback address"); // for class 'A' and some necessary details
    return 'A';
    }
  }
