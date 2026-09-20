#include<stdio.h>
void swap(int *m,int *n);
int main()
{
  int a=10,b=20;
  printf("a=%d b=%d\n",a,b);
  swap(&a,&b);
  printf("now a=%d b=%d\n",a,b );
  return 0;
}
void swap(int *m,int *n)
{
    int s;
    s=*m;
    *m=*n;
    *n=s;
}