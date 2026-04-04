/*10_8.循序結構競賽挑戰-10:計算並聯電阻的阻值(15.0)*/
#include <stdio.h>
int main() {
    float r1,r2;
    scanf("%f %f",&r1,&r2);
    float r = 1/(1/r1 + 1/r2);
    printf("%.2f",r);
    
   return 0;
}
