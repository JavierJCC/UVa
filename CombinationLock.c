#include<stdio.h>
//Combination Lock
int main(){
     int i=1, j=0;
     int ini, num1, num2, num3;
         do{
              scanf("%d %d %d %d",&ini, &num1, &num2, &num3);
              fflush(stdin);
              if(ini==0 && num1==0 && num2 ==0 && num3==0)
                        j=2;
              //
              }while(i<j);
              
     return 0;
     }
