/*9_10.循序結構隨堂測驗-12:計算球的體積(10.0)*/
#include <stdio.h>
#include <math.h>

int main() {
    double r;       // 注意事項：一定要先宣告r的變數 變數volume才能用r
    double volume; // 注意事項：參數和傳回值皆為 double 類型

    
    scanf("%lf",&r);
    volume=(4.0/3.0)*(3.14)*(pow(r,3.0)); // 4/3 要寫成 4.0/3.0（避免整數除法）
    printf("%.2f",volume);

   return 0;
}
