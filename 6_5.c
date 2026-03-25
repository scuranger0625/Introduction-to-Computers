/*6_5.字元字串與ASCII-小寫變大寫(10.0)*/
#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    // 把小寫字母的 ASCII 數值往前移 32 → 變成對應的大寫字母
    printf("%c",c-32);

   return 0;
}
