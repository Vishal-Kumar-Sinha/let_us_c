#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *sourceFile, *destFile;
    char sFilen[100], dFilen[100];
    char ch;
    printf("Enter source filename:: ");
    scanf("%s", sFilen);
    printf("Enter destination filename:: ");
    scanf("%s", dFilen);
    sourceFile = fopen(sFilen, "r");
    if(sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }
    destFile = fopen(dFilen, "w");
    if(destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }
    while((ch=fgetc(sourceFile))!=EOF)
        fputc(toupper(ch), destFile);
    fclose(sourceFile);
    fclose(destFile);
    printf("File copied and converted successfully.\n");
    return 0;
}
