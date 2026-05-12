/*34_7.遞迴-遞迴數列(10.0)*/
#include <stdio.h>

int k(int n){
    // Base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    // Recursive Case
    return 2*k(n-1)+3*k(n-2);

}

int main() {
    int n;
    scanf("%d",&n);
    // 持續輸入直到 n < 1
    while (n>=1){
        printf("%d\n",k(n));
        scanf("%d",&n);
    }
   return 0;
}
