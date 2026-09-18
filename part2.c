#include<stdio.h>
int main()
{
    char name[100];
    char answer;
    int old;
    int i=0;
    printf("i need your name and old\nanswer y or n\n");
    scanf("%c",&answer);
    if(answer=='y')
    {
     for(i;answer=='y';i++)
     {
        printf("enter your name and old\n");
     scanf("%s %d",name,&old);
     printf("my name is %s and my old is %d\n",name,old);
     printf("again?answer y or n\n");
     scanf(" %c",&answer);
     }
    }  
    else
printf("bye");
    printf("%d",i);
    

}