#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
bool isVowel(char c) {
    c=tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
void sol(char *str) {
    int j=0;
    char ans[10];
    for (int i=0;i<strlen(str);i++){
        if(!isVowel(str[i]))
            ans[j++]=str[i];
    }
    ans[j]='\0';
    printf("\nWithout vowel:: %s",ans);
}
int main() {
    char str[10];
    gets(str);
    sol(str);
    return 0;
}
