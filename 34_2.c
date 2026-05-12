/*34_2.遞迴-階乘(10.0)*/
#include <stdio.h>

/*用遞迴找階乘值*/
int level(int i){
    if(i==1){
        return 1;
    }else{
        return level(i-1)*i;
    }
}

int main() {
    int i,j;
    scanf("%d",&i);
    printf("%d!=%d\n",i, level(i));
   return 0;
}
