#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char *abbr(char *s) {
    int n=strlen(s);
    char *str=(char*)malloc((n+1)*sizeof(char));
    int k=0,cnt=0;
    for(int i=0;i<n;i++) {
        if(isupper(s[i])) {
            cnt++;
            str[k++]=s[i];
            str[k++]=' ';
        }
        if(cnt==3)
            str[k++]=s[i];
    }
    str[k]='\0';
    return str;
}
int main() {
    int n=0;
    scanf("%d",&n);
    char names[n][20];
    for (int i=0;i<n;i++)
        scanf("%s",names[i]);
    printf("Abbreviated names are:\n");
    for (int i=0;i<n;i++) {
        char *str=abbr(names[i]);
        printf("%d. ",i+1);
        puts(str);
        free(str);
    }
    return 0;
}