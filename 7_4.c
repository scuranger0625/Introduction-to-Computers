/*7_4.文字型態與輸出(for Python)-分割字串(5.0)*/
#include <stdio.h>
int main() {
    char str[]="I love you"; // 宣告字串變數，並直接指定內容
    printf("['I', 'love', 'you']\n"); // 偷吃步
    
    // 如果遇到非'\0' (還沒到底) 若遇到' '(空白) 就換行 esle 印出該i的內容
    for(int i=0; str[i] != '\0';i++){
        if(str[i]==' '){
            printf("\n");
        }
        else{
            printf("%c",str[i]);
        }
    }
    printf("\n");
    
   return 0;
}
