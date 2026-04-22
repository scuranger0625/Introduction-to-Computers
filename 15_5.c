/*15_5.多選一-三角形型別(20.0)*/
#include <stdio.h>
int main() {
    int a,b,c; // 三角形三邊長
    scanf("%d %d %d",&a,&b,&c);
    
    // 先判斷是否能構成三角形
    if (a + b <= c || a + c <= b || b + c <= a){
        printf("%d %d %d: 無法構成三角形",a,b,c);
    }
    
    else if (a==b&& b==c && c==a){  // 三個邊長相等
        printf("%d %d %d: 正三角形",a,b,c);
    }else if ((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(a*a)+(c*c)==(b*b)){
        printf("%d %d %d: 直角三角形",a,b,c);
    }else if (a==b || b==c || c==a){  // 有兩條邊長相等
        printf("%d %d %d: 等腰三角形",a,b,c);
    }else{
        printf("%d %d %d: 一般三角形",a,b,c);
    }

   return 0;
}
