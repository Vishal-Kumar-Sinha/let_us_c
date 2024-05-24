#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define MAXR 1000
typedef struct {
    char name[MAX];
    int age;
} Student;
int cmp(const void *a, const void *b) {
    Student *sA=(Student *)a;
    Student *sB=(Student *)b;
    return strcmp(sA->name, sB->name);
}
int main() {
    FILE *f;
    Student students[MAXR];
    int count=0;
    f=fopen("students.txt", "r");
    if (f==NULL) {
        perror("Error opening file\n");
        return 1;
    }
    while(fscanf(f, "%s %d", students[count].name, &students[count].age)!=EOF) {
        count++;
        if(count>=MAXR) {
            printf("Reached maximum records.\n");
            break;
        }
    }
    fclose(f);
    qsort(students, count, sizeof(Student), cmp);
    printf("Sorted student records::\n");
    for(int i=0;i<count;i++)
        printf("%s %d\n", students[i].name, students[i].age);
    return 0;
}
