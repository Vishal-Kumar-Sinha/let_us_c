#include <stdio.h>
#include <stdlib.h>
#define CHAR_SET_SIZE 256
void initializeSubstitutionTable(char *substitutionTable)
{
for (int i = 0; i < CHAR_SET_SIZE; i++)
{
substitutionTable[i] = (i + 5) % CHAR_SET_SIZE;
}
}
void encryptSubstitutionCipher(const char *sourceFile, const char *targetFile,
char *substitutionTable)
{
FILE *src, *tgt;
int ch;
src = fopen(sourceFile, "r");
if (src == NULL)
{
perror("Error opening source file");
exit(1);
}
tgt = fopen(targetFile, "w");
if (tgt == NULL)
{
perror("Error opening target file");
fclose(src);
exit(1);
}
while ((ch = fgetc(src)) != EOF)
{
fputc(substitutionTable[ch], tgt);
}
fclose(src);
fclose(tgt);
printf("File encrypted successfully using Substitution Cipher.\n");
}
void decryptSubstitutionCipher(const char *sourceFile, const char *targetFile,
char *substitutionTable)
{
FILE *src, *tgt;
int ch;
char reverseTable[CHAR_SET_SIZE];
for (int i = 0; i < CHAR_SET_SIZE; i++)
{
reverseTable[(unsigned char)substitutionTable[i]] = i;
}
src = fopen(sourceFile, "r");
if (src == NULL)
{
perror("Error opening source file");
exit(1);
}
tgt = fopen(targetFile, "w");
if (tgt == NULL)
{
perror("Error opening target file");
fclose(src);
exit(1);
}
while ((ch = fgetc(src)) != EOF)
{
fputc(reverseTable[ch], tgt);
}
fclose(src);
fclose(tgt);
printf("File decrypted successfully using Substitution Cipher.\n");
}
int main()
{
char sourceFile[100], targetFile[100];
char substitutionTable[CHAR_SET_SIZE];
int choice;
initializeSubstitutionTable(substitutionTable);
printf("Enter the source filename: ");
scanf("%s", sourceFile);
printf("Enter the target filename: ");
scanf("%s", targetFile);
printf("Enter 1 for encryption or 2 for decryption: ");
scanf("%d", &choice);
if (choice == 1)
{
encryptSubstitutionCipher(sourceFile, targetFile, substitutionTable);
}
else if (choice == 2)
{
decryptSubstitutionCipher(sourceFile, targetFile, substitutionTable);
}
else
{
printf("Invalid choice.\n");
}
return 0;
}