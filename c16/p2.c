#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
bool removeAble(char ch) {
    char c = tolower(ch);
    if(c == 't' || c == 'h' || c == 'e')
        return true;
    return false;
}
char *removeThe(char *str) {
    int n = strlen(str);
    char *s=(char*)malloc((n+1)*sizeof(char));
    int k = 0;
    for(int i=0;i<n;i++) {
        if(!removeAble(str[i]))
            s[k++] = str[i];
    }
    s[k]='\0';
    return s;
}
int main() {
    char str[] = "The a bbcvcb a an The bcdefg";
    printf("Original :: ");
    puts(str);
    char *ans=removeThe(str);
    printf("After removing 'the':: \n");
    puts(ans);
    return 0;
}