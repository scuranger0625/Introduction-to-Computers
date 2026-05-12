/*34_3.遞迴-重複計算階乘(10.0)*/
#include <stdio.h>

int recursion(int i){
    // Base Case
    if (i==1){       
        return 1;
        }else{
            return recursion(i-1)*i;
        }
    }


int main() {
    int n;
    scanf("%d",&n);
    // 從 1 印到 n
    for(int i =1;i<=n;i++){
        printf("%d!=%d\n",i,recursion(i));   
    }
   return 0;
}
