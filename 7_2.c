/*7_2.文字型態與輸出(for Python)-從字串找字元(5.0)*/
#include <stdio.h>
int main() {
    char str[]="Hello, Dice"; // 宣告字串變數，並直接指定內容
    
    for (int i=0;i<5;i++){
        printf("%c\n",str[i]); // str[i] = 取出第 i 個字元
    }

   return 0;
}
