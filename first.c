#include <stdio.h>
 int main(void)
{
    float num;
    printf("Enter a floating-point value:\n");
    scanf("%f",&num);
    printf("%f\n",num);
    printf("%e\n",num);
    printf("%a",num);
    return 0;
   
}