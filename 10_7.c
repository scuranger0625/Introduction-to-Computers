/*10_7.循序結構競賽挑戰-d073分組報告(15.0)*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n%3 == 0){
        printf("%d",n/3);
    } else {
        printf("%d",n/3+1);
    }

   return 0;
}
