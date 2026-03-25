/*6_9.字元字串與ASCII-解碼(10.0)*/
#include <stdio.h>
int main() {
    char str[9];
    scanf("%s",str);
    // 將每個字元的ASCII碼（十進位值）減2後印出對應的字元。
    for (int i=0; i<8;i++){
        printf("%c",str[i]-2);
    }

   return 0;
}
