/*14_1.巢狀選擇-分數等第(40.0)*/
#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if (x>=90 && x<=100){
        printf("分數%d等第A!\n",x);
        }else if (x>=80){
        printf("分數%d等第B!\n",x);
            }else if (x>=70){
                printf("分數%d等第C!\n",x);
            }else if (x>=60){
                printf("分數%d等第D!\n",x);
            }else{
                printf("分數%d等第F!\n",x);
            }
   return 0;
}
