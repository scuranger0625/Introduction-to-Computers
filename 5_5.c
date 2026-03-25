/*5_5.算術運算子-三次溫度換算(10.0)*/
#include <stdio.h>
int main() {
    float a,b,c;

    scanf("%f%f%f",&a,&b,&c);
    a=((9.0/5.0)*a+32);
    b=((9.0/5.0)*b+32);
    c=((9.0/5.0)*c+32);
    printf("華氏溫度=%.1f\n",a);
    printf("華氏溫度=%.1f\n",b);
    printf("華氏溫度=%.1f\n",c);
    
   return 0;
}
