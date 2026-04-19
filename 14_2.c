/*14_2.巢狀選擇-正三角形嗎?(30.0)*/
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if (a+b<=c || b+c<=a ||a+c<=b){
        printf("%d %d %d: 無法構成三角形",a,b,c);        
    }else if (a == b && b == c){
        printf("%d %d %d: 正三角形",a,b,c);
    }else {
        printf("%d %d %d: 非正三角形",a,b,c);
    }

   return 0;
}
