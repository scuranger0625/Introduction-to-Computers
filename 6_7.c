/*6_7.字元字串與ASCII-小寫字串(10.0)*/
#include <stdio.h>
int main() {
    char string[100]; // 開一個字串陣列
    
    scanf("%s",string);
    printf("%c %c %c",string[0]-32,string[1]-32,string[2]-32);
    
   return 0;
}
