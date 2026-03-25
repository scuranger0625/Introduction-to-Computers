/*2_4.輸出函式-來個表格(20.0)*/
#include <stdio.h>


int main() {
    int num1;
    int num2;
    int num3;

    for(int num1=1;num1<=10;num1++){
        num2=num1*num1; // 每次都要計算
        num3=num1*num1*num1;
        printf("%d\t%d\t%d\n",num1,num2,num3);
    }
   return 0;
}
