/*5_7.算術運算子-圓周與面積(10.0)*/
#include <stdio.h>
int main() {
    float pi,area,radius,circumference;
    pi=3.14;
    
    scanf("%f",&radius);
    area=radius*radius*pi;
    circumference=(radius*2)*pi;
    printf("圓周%.1f\n",circumference);
    printf("圓的面積%.1f",area);

   return 0;
}
