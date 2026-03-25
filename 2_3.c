/*2_3.輸出函式-印aaa(20.0)*/
#include <stdio.h>

int main() {
    int i,j;
    // 上半部a 遞增
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            printf("a");
        }
        printf("\n"); // 計算完a要print的次數，整行結束後才換行
    }
    // 下半部
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("a");
        }
        printf("\n");
    }
    
   return 0;
}
