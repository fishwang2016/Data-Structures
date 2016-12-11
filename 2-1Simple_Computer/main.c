/*
这个是数据结构的练习程序。
原题目见《数据结构学习与实验指导》 2-1
课本是浙江大学老师编写。

本程序实现的功能是表达式从左往右运算

*/


#include <stdio.h>
#include <stdlib.h>

void simpleComputer(){

  int sum;
  int x;
  char op;
  scanf("%d%c",&sum, &op);  // 如何输入小数？
  while(op!='='){

    scanf("%d",&x);
    switch(op){

         case '+':
             sum += x;
             break;
         case '-':
            sum -= x;
            break;
         case '*':
            sum *= x;
            break;
         case '/':
            if (x==0){
               printf("0 can not be a divider.\n");
               return ;
            }
            sum /= x;
            break;

         default:
            printf("Illeagal input!\n");
            return ;

    }
    scanf("%c",&op);
  }
  printf("Sum = %d\n",sum);
}

int main()
{


    printf("Hello world!\n");

    simpleComputer();
    return 0;
}
