#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char *av[]) {
    int i, a, b;
    a = b = 0;
    if (ac != 4) {
        puts("Wrong number of arguements");
        printf("\n.Write like this : ");
        printf("\"calc\" \"switch\" \"number 1\" \"number 2\"\n");
        exit(1);
    }
    for (i = 0; av[2][i] != '\0'; i++) {
        a *= 10;
        a = av[2][i] - 48;
    }
    for (i = 0; av[3][i] != '\0'; i++) {
        b *= 10;
        b = av[3][i] - 48;
    }
    switch (av[1][0]) {
        case '+':
            printf("%d %c %d = %d", a, av[1][0], b, a + b);
            break;
        case '-':
            printf("%d %c %d = %d", a, av[1][0], b, a - b);
            break;
        case '/':
            printf("%d %c %d = %.2f", a, av[1][0], b, (float)a/(float)b);
            break;
        case '*':
            printf("%d %c %d = %d", a, av[1][0], b, a * b);
            break;
        case '%':
            printf("%d %c %d = %d", a, av[1][0], b, a % b);
            break;
        case '<':
            if (a < b)
                printf("%d %c %d is True.", a, av[1][0], b);
            else
                printf("%d %c %d is False.", a, av[1][0], b);
            break;
        case '>':
            if (a > b)
                printf("%d %c %d is True.", a, av[1][0], b);
            else
                printf("%d %c %d is False.", a, av[1][0], b);
            break;
        case '=':
            if (a == b)
                printf("%d %c %d is True.", a, av[1][0], b);
            else
                printf("%d %c %d is False.", a, av[1][0], b);
            break;
        default:
            printf("Operator '%c' is not found.\n", av[1][0]);
    }
    return 0;
}