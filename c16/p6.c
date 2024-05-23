#include <stdio.h>
#include <string.h>
void printThreeDigits(int num) {
    const char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    if (num >= 100) {
        printf("%s Hundred ", ones[num / 100]);
        num %= 100;
    }
    if (num >= 20) {
        printf("%s ", tens[num / 10]);
        num %= 10;
    }
    else if (num >= 10) {
        printf("%s ", teens[num - 10]);
        return;
    }
    if (num > 0)
        printf("%s ", ones[num]);
}

void printNumberInWords(long long int num) {
    if(num==0) {
        printf("Zero");
        return;
    }
    const char *units[]={"", "Thousand", "Million", "Billion"};
    int unitIndex=0;
    int parts[4]={0};
    while(num>0) {
        parts[unitIndex++]=num%1000;
        num/=1000;
    }
    for(int i=unitIndex-1;i>=0;i--) {
        if(parts[i]!=0) {
            printThreeDigits(parts[i]);
            if(i>0)
                printf("Thousand ");
        }
    }
}
int main() {
    long long int num;
    scanf("%lld", &num);
    printNumberInWords(num);
    printf("\n");
    return 0;
}