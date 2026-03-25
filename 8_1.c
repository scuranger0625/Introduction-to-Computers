/*8_1.位元運算子-位元運算子的二元運算(5.0)*/
#include <stdio.h>

int main() {
    printf("AND運算\n");
    printf("0 AND 0\t%d\n", 0 & 0);
    printf("0 AND 1\t%d\n", 0 & 1);
    printf("1 AND 0\t%d\n", 1 & 0);
    printf("1 AND 1\t%d\n", 1 & 1);

    printf("OR運算\n");
    printf("0 OR 0\t%d\n", 0 | 0);
    printf("0 OR 1\t%d\n", 0 | 1);
    printf("1 OR 0\t%d\n", 1 | 0);
    printf("1 OR 1\t%d\n", 1 | 1);

    printf("XOR運算\n");
    printf("0 XOR 0\t%d\n", 0 ^ 0);
    printf("0 XOR 1\t%d\n", 0 ^ 1);
    printf("1 XOR 0\t%d\n", 1 ^ 0);
    printf("1 XOR 1\t%d\n", 1 ^ 1);

    return 0;
}
