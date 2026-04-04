/*12_1.用if交換變數-比大小(30.0)*/
#include <stdio.h>
int main() {
    int a,b,max;
    scanf("%d%d",&a,&b);
    max = a; /*指定max值為a*/
    
    /*如果b>a，則更新max值*/
    if (b>max){
        max = b;
    }
    printf("最大值%d\n",max);

   return 0;
}
