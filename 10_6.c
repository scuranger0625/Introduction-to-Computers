/*10_6.循序結構競賽挑戰-tzm北二1.六邊形屋瓦(15.0)*/
#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int ans = 6 + 4 * (m - 1) + (n - 1) * (3 * m + 2);
    printf("%d\n", ans);

   return 0;
}
