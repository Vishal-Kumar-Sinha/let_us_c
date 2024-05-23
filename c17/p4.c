#include <stdio.h>
#include <stdlib.h>
struct player {
    char name[20];
    int age;
    int no_of_test;
    float average;
};
int compare(const void *a, const void *b) {
    struct player *playerA = (struct player *)a;
    struct player *playerB = (struct player *)b;
    return (playerA->average > playerB->average) - (playerA->average < playerB->average);
}
int main() {
    int n;
    scanf("%d", &n);
    struct player players[n];
    for (int i = 0; i < n; i++) {
        printf("Player %d details:: \n", i + 1);
        printf("Name:: ");
        scanf("%s", players[i].name);
        printf("age:: ");
        scanf("%d", &players[i].age);
        printf("Number of tests:: ");
        scanf("%d", &players[i].no_of_test);
        printf("Average score:: ");
        scanf("%f", &players[i].average);
    }
    qsort(players, n, sizeof(struct player), compare);
    printf("After rearranging:: \n");
    for (int i = 0; i < n; i++) {
        printf("Player %d details:: \n", i + 1);
        printf("Name:: ");
        printf("%s\n", players[i].name);
        printf("age:: ");
        printf("%d\n", players[i].age);
        printf("Number of tests:: ");
        printf("%d\n", players[i].no_of_test);
        printf("Average score:: ");
        printf("%.2f\n", players[i].average);
    }
    return 0;
}