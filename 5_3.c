/*5_3.算術運算子-梯形面積(20.0)*/
#include <stdio.h>
int main() {
    float upper,lower,high;
    float ans;
    scanf("%f%f%f",&upper,&lower,&high);
    ans=((upper+lower)*high)/2;
    printf("梯形面積%.1f平方公分",ans);

   return 0;
}
