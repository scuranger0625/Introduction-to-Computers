/*5_4.算術運算子-溫度換算(10.0)*/
#include <stdio.h>
int main() {
    float celsius_temperature,fahrenheit_temperature;
    float conversion_formula;
    
    scanf("%f",&celsius_temperature);
    conversion_formula=(9.0/5.0)*celsius_temperature+32;
    printf("華氏溫度=%.1f",conversion_formula);
    
    

   return 0;
}
