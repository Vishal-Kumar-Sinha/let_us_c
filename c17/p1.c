#include <stdio.h>
struct student
{
    int rno;
    char name[10];
    char dept[10];
    char course[10];
    int yOfJoining;
};
void printStudentNameByYear(struct student students[], int n, int year) {
    printf("Students in year %d are::\n", year);
    for(int i = 0; i < n; i++) {
        if (students[i].yOfJoining == year)
            printf("%s\n", students[i].name);
    }
    printf("\n");
}
void printStudentByRoll(struct student students[], int n, int roll) {
    printf("Student details of roll number %d\n", roll);
    for (int i = 0; i < n; i++) {
        if (students[i].rno == roll) {
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].dept);
            printf("Course: %s\n", students[i].course);
            printf("Year of joining: %d\n", students[i].yOfJoining);
            return;
        }
    }
    printf("Data not found\n");
}
int main() {
    struct student students[450];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter student %d\n",i+1);
        printf("Roll number:: ");
        scanf("%d", &students[i].rno);
        printf("Name:: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Department:: ");
        scanf(" %[^\n]s", students[i].dept);
        printf("Course:: ");
        scanf(" %[^\n]s", students[i].course);
        printf("Year of joining:: ");
        scanf("%d", &students[i].yOfJoining);
    }
    printf("Enter the year of student:: ");
    int year=0;
    scanf("%d", &year);
    printStudentNameByYear(students, n, year);
    printf("Enter roll number:: ");
    int roll=0;
    scanf("%d", &roll);
    printStudentByRoll(students, n, roll);
    return 0;
}