/*7_3.文字型態與輸出(for Python)-從字串找單字(5.0)*/
#include <stdio.h>
int main() {
    char str[]="Hello, Dice"; // 宣告字串變數，並直接指定內容
    
    // 第一個單字(遇到 , 就停)
    for(int i=0; str[i] !=',';i++){
        printf("%c",str[i]);
    }
    
    printf("\n");
    
    // 找到空白後開始印第二個單字
    int i=0;
    while(str[i] != ' ')i++;
    i++; // 跳過空白
    
    while(str[i] != '\0'){    // 當前這個字元 不是字串結尾 時就繼續跑
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    
   return 0;
}
