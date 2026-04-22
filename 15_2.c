/*15_2.多選一-點套餐(20.0)*/
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    
    if (a==1){
        printf("牛奶\n");
        printf("西瓜\n");
        printf("檸檬水\n");
        printf("吐司\n");
    }else if (a==2){
        printf("西瓜\n");
        printf("檸檬水\n");
        printf("吐司\n"); 
    } else if (a==3){
        printf("檸檬水\n");
        printf("吐司\n"); 
    }else if (a==4){
        printf("吐司\n"); 
    }else{
        printf("超出範圍\n"); 
    }

   return 0;
}
