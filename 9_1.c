/*9_1.循序結構隨堂測驗-08:三角形(10.0)*/
#include <stdio.h>
int main() {
    int i,j;
    
    for(i=1;i<=3;i++){
        // 印空白
        for(j=1;j<=3-i;j++){
            printf(" ");
        }
        // 印星號
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        // 換行
        printf("\n");
    }
   return 0;
}
