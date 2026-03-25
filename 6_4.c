/*6_4.字元字串與ASCII-大寫變小寫(10.0)*/
#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    // 把大寫字母的 ASCII 數值往後移 32 → 變成對應的小寫字母
    printf("%c",c+32);

   return 0;
}
