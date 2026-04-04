/*13_7.雙重選擇-是否為5的倍數-2?(10.0)*/
#include <stdio.h>
int main() {
    int n;
    int a,b,c;
    scanf("%d",&n);
    
    c = n%10;          // 個位
    b = (n/10)%10;     // 十位
    a = n/100;         // 百位
    
    if (a%5 != 0){
        printf("百位數%d不是5的倍數\n",a);
        }else {
            printf("百位數%d是5的倍數\n",a);
        }
    
    if (b%5 != 0){
        printf("十位數%d不是5的倍數\n",b);
        }else {
            printf("十位數%d是5的倍數\n",b);
        }
        
    if (c%5 != 0){
        printf("個位數%d不是5的倍數\n",c);
        }else{
            printf("個位數%d是5的倍數\n",c);
        }
    
   return 0;
}
