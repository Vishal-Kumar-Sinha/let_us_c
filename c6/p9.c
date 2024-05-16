/**/
#include <stdio.h>
int main() {
    int num, r, c, sp, i = 1;
    scanf("%d", &num);
    for(r = 1; r <= num; r++) {
        for(sp = 1; sp <= num - r; sp++)
            printf(" ");
        for(c = 1; c <= r; c++)
            printf("%d ", i++);
        printf("\n");
    }
    return 0;
}