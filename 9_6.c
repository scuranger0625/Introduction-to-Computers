/*9_6.循序結構隨堂測驗-06:流感疫情死亡率(10.0)*/
#include <stdio.h>
int main() {
    int confirmed_cases,deaths;
    double mortality_rate;
    scanf("%d %d",&confirmed_cases,&deaths);
    
    // 要把其中一個數字強制轉型成 double，
    // 題目要的是「百分比」，所以算完比例後還要乘以 100
    mortality_rate=(double)deaths/confirmed_cases*100;
    // 在 printf 裡，如果要印出真正的 %，
    // 必須寫成 %%，因為單一的 % 是格式控制符號
    printf("%.3f%%",mortality_rate);

   return 0;
}
