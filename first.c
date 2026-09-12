#include <stdio.h>
#include<string.h>
 int main(void)
{   int num1,num2;
    char name1[40],name2[40];
    printf("输入姓名:");
    scanf("%s%s",name1,name2);
    num1=strlen(name1);
    num2=strlen(name2);
    printf("%s %s\n%*d %*d\n",name1,name2,num1,num1,num2,num2);
    printf("%s %s\n%d %*d",name1,name2,num1,num1,num2);

    return 0;
   
}