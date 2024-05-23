#include <stdio.h>
#include <stdbool.h>
struct employee {
    int code;
    char name[15];
    int year_of_joining;
};
bool isValid(int x, int n, int current_year) {
    if (current_year - x >= 3)
        return true;
    return false;
}
int main() {
    int n;
    scanf("%d", &n);
    struct employee employees[n];
    printf("Enter emplyee details: \n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d details:: \n", i + 1);
        printf("Code:: ");
        scanf("%d", &employees[i].code);
        printf("Name:: ");
        scanf("%s", employees[i].name);
        printf("Year of joining:: ");
        scanf("%d", &employees[i].year_of_joining);
    }
    printf("Enter current year:: ");
    int current_year;
    scanf("%d", &current_year);
    printf("Employees >= 3 years:: ");
    for (int i = 0; i < n; i++) {
        if (isValid(employees[i].year_of_joining, n, current_year)) {
            printf("Code: %d\n", employees[i].code);
            printf("Name: %s\n", employees[i].name);
        }
    }
    return 0;
}