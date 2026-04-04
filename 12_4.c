/*12_4.用if交換變數-自主學習(5.0)*/
#include <stdio.h>
int main() {
    int years;
    scanf("%d",&years);
    
    if (years % 400 == 0){
        printf("閏年");
    } else if (years % 100 == 0 && years % 400 != 0){
        printf("平年");
    } else if (years % 4 == 0 && years % 100 != 0){
        printf("閏年");
    } else if (years % 4 != 0) {
        printf("平年");
    }

   return 0;
}
