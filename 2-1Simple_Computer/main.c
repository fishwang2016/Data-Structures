/*
��������ݽṹ����ϰ����
ԭ��Ŀ�������ݽṹѧϰ��ʵ��ָ���� 2-1
�α����㽭��ѧ��ʦ��д��

������ʵ�ֵĹ����Ǳ��ʽ������������

*/


#include <stdio.h>
#include <stdlib.h>

void simpleComputer(){

  int sum;
  int x;
  char op;
  scanf("%d%c",&sum, &op);  // �������С����
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
