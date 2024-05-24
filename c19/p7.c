#include <stdio.h>
#include <stdlib.h>
struct donor
{
char name[21];
char address[41];
int age;
int bloodType;
};
void printDonorsBelow25WithType2()
{
FILE *file;
struct donor d;
file = fopen("blood_donors.dat", "rb");
if (file == NULL)
{
perror("Error opening file");
return;
}
while (fread(&d, sizeof(struct donor), 1, file) == 1)
{
if (d.age < 25 && d.bloodType == 2)
{
printf("Name: %s\n", d.name);
printf("Address: %s\n", d.address);
printf("Age: %d\n", d.age);
printf("Blood Type: %d\n", d.bloodType);
printf("\n");
}
}
fclose(file);
}
int main()
{
printDonorsBelow25WithType2();
return 0;
}