#include<stdio.h>//通过传地址的方式实现ab值的交换，在地址上实现值的更改。
void swap(int *m,int *n);//声明函数，形参是指针
int main()
{
  int a=10,b=20;
  printf("a=%d b=%d\n",a,b);
  swap(&a,&b);//存ab地址
  printf("now a=%d b=%d\n",a,b );
  return 0;
}
void swap(int *m,int *n)//定义函数
{
    int s;
    s=*m;  //指针解引并赋值给中间量s
    *m=*n;
    *n=s;
}