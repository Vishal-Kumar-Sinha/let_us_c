#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10000
#define EndOfWord (word[i]==' '||word[i]==','||word[i]=='\n'||word[i]=='.')

int main(int ac, char *argv[]) {
    FILE *fp;
    if (ac != 4) {
        puts("Wrong number of arguements\n");
        printf("Write like this : ");
        printf("\"change\" \"old_word\" \"new_word\" \"file_name\"\n");
        exit(1);
    }
    char *oldWord = argv[1];
    char *newWord = argv[2];
    char *filename = argv[3];
    fp = fopen(argv[3], "r");
    if (fp == NULL) {
        perror("Error : ");
        exit(1);
    }
    char buffer[MAX];
    int oldWordLen=strlen(oldWord),newWordLen=strlen(newWord),bytesRead;
    while((bytesRead=fread(buffer,1,MAX,fp))>0) {
        for(int i=0;i<bytesRead-oldWordLen;i++) {
            if(strncmp(buffer+i,oldWord,oldWordLen)==0) {
                memcpy(buffer+i,newWord,newWordLen);
                i+=newWordLen-1;
            }
        }
        fwrite(buffer,1,bytesRead,stdout);
    }
    fclose(fp);
    return 0;

}