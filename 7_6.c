/*7_6.文字型態與輸出(for Python)-倒著印字串(5.0)*/
#include <stdio.h>

int main() {
    char str[]="Hello, Dice"; 
    
    // 先找到字串長度
    int len=0;
    while(str[len] != '\0'){
        len++;
    }
    
    // 從後面印回來
    for (int i = len-1; i>=0;i--){
        printf("%c",str[i]);
    }
   return 0;
}
