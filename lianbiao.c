#include<stdio.h>
#include<stdlib.h>
#define false 0
#define true 1
//结构体定义
typedef struct NODE{
  struct NODE *link;
   int data;
}node;

node *creat(int num)//创建新节点函数
{
    node *p=malloc(sizeof(node));//分配内存
    if(p==NULL)//分配失败
    return NULL;
   p->data=num;//节点的数据为num
   p->link=NULL;//指向空
   return p;//返回一个该节点的地址
}

void inserthead(node*head,int n)//头插
{
    node *new=creat(n);//返回一个新节点
    if(new==NULL)//分配失败
    return;
    new->link=head->link;//新指针指向头节点
    head->link=new;//头指针指向新节点
}
void insertlast(node *head,int n)//尾插
{
    node *new=creat(n);//新定义节点
    node *tail=head;//重新定义一个新指针并赋值为头指针，避免移动头指针
    while(tail->link !=NULL)//依次往后寻找，知道找到最后一个节点
    {
    tail=tail->link;
    }
  tail->link=new;//此时节点为末尾，实现尾插
}
void printn(node *head)//遍历打印
{
    node *p=head->link;//新指针指向第一个有效节点（不是头节点，避免打印头节点数据）
    while(p !=NULL)//一直往后，知道链表末尾
    {
        printf("%d",p->data);//打印每个节点数据
        p=p->link;//指向下一个
    
    printf("\n");
    }
}
int check(node *head,int m)//输出含某个数的节点距头节点的距离的函数
{
    {
        int i=1;
        node *p=head->link;//p初始为第一个节点（不是头节点）
        while(p!= NULL)//终止的条件判断
        { 
            if(p->data==m)//找到该值直接返回
            return i;
           p=p->link;
           i++;
            
        }
        
        return false;//没有找到返回0
        
    }
} 
int del(node*head,int m)//删除第某个数的函数
{   
    node *front=head;//定义前后双指针
    node *later=head->link;
    int i=1;
    if(front==NULL)//判断是否为空
    return false;
    
        while(later!=NULL)//如果输入数超出节点数，返回false
        {    
            if(i==m)//找到第m个节点
            {
             front->link=later->link;//前指针指向后指针后面的节点
             free(later);//删除该节点
             return true;
            }
            front=front->link;
            later=later->link;//双指针后移
            i++;//计数增加
        }
        return false;
    
    
}
void reverse(node*head)//倒转函数定义
{
    node* pre=NULL;//前指针
    node* cur=head->link;//当前指针
    node* next;//后指针，用来保存后面的节点，不然找不到后面
    if(head==NULL||head->link==NULL)//避免程序崩溃
    return;
    while(cur!=NULL)//结束判断
    {
        next=cur->link;//后指针位置
        cur->link=pre;//链表倒置，当前指向前
        pre=cur;//后移
        cur=next;//后移

    }
    //直到cur移出链表成空，前面的都连接在了一起
    head->link=pre;//头指针指向最末尾的节点，完成倒转
}
int main(void)
{   
    node *head=malloc(sizeof(node));//分配内存
    head->link=NULL;//指向空
    head->data=0; //储存值为0  
    //头节点的创建
    inserthead(head,100);
    inserthead(head,35);//头插
    insertlast(head,123);
    insertlast(head,12);//尾插
    printf("打印前；\n");
    printn(head);//遍历打印
    int m=check(head,12);//算位置
    printf("12储存在第%d个节点。",m);//找某个数并显示是第几个
    reverse(head);//倒转函数
    printf("\n倒转后:\n");//倒转链表
    printn(head);//遍历打印
    del(head,2);//删除第而个节点
    printf("打印后:\n");
    printn(head);//遍历打印
    int i=check(head,12);//算位置
    printf("12储存在第%d个节点。\n",i);//找某个数并显示是第几个
    free(head);
    return 0;
}

