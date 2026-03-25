#include <stdio.h>

int main(){
   char ch, charin;  // 宣告兩個字元變數

   scanf("%c", &charin);  
   // 讀入一個字元（例如 G）
   // &charin = 把輸入存到這個變數的位置

   ch = 'a';  
   // 指定字元常數 'a' 給變數 ch
   // 注意：單引號 'a' 是「字元」，不是字串

   printf("%c\n", ch);  
   // 印出 ch → 會印 a

   printf("%c\n", charin);  
   // 印出剛剛輸入的字元 → G

   return 0;
}
