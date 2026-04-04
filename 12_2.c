/*12_2.用if交換變數-三數比大小(30.0)*/
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    // 用if 更新 max
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    // 用if 更新 min
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("%d %d",max,min);
   return 0;
}
