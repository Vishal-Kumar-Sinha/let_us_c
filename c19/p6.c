#include <stdio.h>
#include <stdlib.h>
struct date
{
int d, m, y;
};
struct employee
{
int empcode[6];
char empname[20];
struct date join_date;
float salary;
};
void sortEmployees(struct employee arr[], int n)
{
int i, j;
struct employee temp;
for (i = 0; i < n - 1; i++)
{
for (j = 0; j < n - i - 1; j++)
{
if (arr[j].join_date.y > arr[j + 1].join_date.y ||
(arr[j].join_date.y == arr[j + 1].join_date.y &&
(arr[j].join_date.m > arr[j + 1].join_date.m ||
(arr[j].join_date.m == arr[j + 1].join_date.m &&
arr[j].join_date.d > arr[j + 1].join_date.d))))
{
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
void readAndWriteRecords()
{
FILE *sourceFile, *targetFile;
struct employee employees[10];
int i;
sourceFile = fopen("employee_records.dat", "rb");
if (sourceFile == NULL)
{
perror("Error opening source file");
return;
}
fread(employees, sizeof(struct employee), 10, sourceFile);
fclose(sourceFile);
sortEmployees(employees, 10);
targetFile = fopen("sorted_employee_records.dat", "wb");
if (targetFile == NULL)
{
perror("Error opening target file");
return;
}
fwrite(employees, sizeof(struct employee), 10, targetFile);
fclose(targetFile);
printf("Employee records sorted and written to file successfully.\n");
}
int main()
{
readAndWriteRecords();
return 0;
}