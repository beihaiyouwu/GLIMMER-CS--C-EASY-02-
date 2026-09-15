#include <stdio.h>
#define hour 60
 int main(void)
{  
    int num1,second,num;
    printf("输入时间(分钟)；");
    scanf("%d",&num1);
    while(num1>0)
    {
    num=num1/hour;
    second=num1%hour;
     printf("%d时%d分\n",num,second);
     printf("请再次输入；");
     scanf("%d",&num1);
    }
    return 0;

   
}