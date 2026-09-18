#include <stdio.h>//方差成绩应该是小数而非整数，所以我全部声明为float
float fangcha(int m,int n,int z,float w);
float  grade (float s,float u);
void rank(float zh1,float zh2,float zh3);
int main(){
  int x1, x2, x3;
  int y1, y2, y3;
  int z1, z2, z3;

  printf("请输入小明的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &x1, &x2, &x3);
  printf("请输入小强的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &y1, &y2, &y3);
  printf("请输入小林的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &z1, &z2, &z3);

  float p1 = (x1 + x2 + x3) / 3;
  float f1 =fangcha(x1,x2,x3,p1);
  float zh1 = grade(f1,p1);

  float p2 = (y1 + y2 + y3) / 3;
  float f2 = fangcha(y1,y2,y3,p2);
  float zh2 = grade(f2,p2);

  float p3 = (z1 + z2 + z3) / 3;
  float f3 = fangcha(z1,z2,z3,p3);
  float zh3 = grade(f3,p3);
  rank(zh1,zh2,zh3);
  return 0;
//方差计算
}
float fangcha(int m,int n,int z,float w)
{
    float i;
    i = ((w-m)*(w-m)+(w-n)*(w-n)+(w-z)*(w-z))/3;
    return i;
}
//平均成绩计算
float  grade (float s,float u)
{  float i;
    i= 3*s-u/3;
    return i;

}
//排名
 void rank(float zh1,float zh2,float zh3)
{    
    if (zh1 >= zh2 && zh2 >= zh3) {
      printf("小明 > 小强 > 小林");
  } else if (zh1 >= zh3 && zh3 >= zh2) {
      printf("小明 > 小林 > 小强");
  } else if (zh2 >= zh1 && zh1 >= zh3) {
      printf("小强 > 小明 > 小林");
  } else if (zh2 >= zh3 && zh3 >= zh1) {
      printf("小强 > 小林 > 小明");
  } else if (zh3 >= zh1 && zh1 >= zh2) {
      printf("小林 > 小明 > 小强");
  } else { // zh3 >= zh2 && zh2 >= zh1
      printf("小林 > 小强 > 小明");
  }

}

