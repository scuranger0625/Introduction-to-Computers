/*6_8.字元字串與ASCII-大寫字串(10.0)*/
#include <stdio.h>
int main() {
    char str[100];
    scanf("%s",str);
    printf("%c %c %c",str[0]+32,str[1]+32,str[2]+32);

   return 0;
}
