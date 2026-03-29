/*10_2.循序結構競賽挑戰-UVa10970(10.0)*/
/* 輸入的兩個整數 M 與 N，1≤M≤300 表示巧克力有幾列，1≤
N≤300 表示巧克力有幾欄。*/

#include <stdio.h>
int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",m*n-1);

   return 0;
}
