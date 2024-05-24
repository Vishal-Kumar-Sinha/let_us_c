#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
bool isVowel(char c) {
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    return false;
}
int cntOccur(char *str) {
    int n=strlen(str),cnt=0;
    for(int i=0;i<n-1;i++) {
        if(isVowel(str[i]) && isVowel(str[i+1]))
            cnt++;
    }
    return cnt;
}
int main() {
    char str[]="Please read this application and give me gratuity";
    printf("%d\n",cntOccur(str));
    return 0;
}