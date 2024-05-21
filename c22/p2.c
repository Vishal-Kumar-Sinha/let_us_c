#include<stdio.h>

enum gender { male, female };
enum age { major, minor };
typedef struct policy {
    enum gender g;
    enum age level;
    char policy_name[10];
    unsigned int duration_in_year;
} POLICY;

int main() {
    int n,enm;
    char str[10];
    scanf("%d",&n);
    POLICY p[n];
    for(int i=0;i<n;i++) {
        printf("\nEnter the gender (male = 0 or female = 1) :: ");
        scanf("%d",&enm);
        (enm==1)?(p[i].g=female):(p[i].g=male);
        printf("\nEnter the age status (major = 0 or minor = 1) :: ");
        scanf("%d",&enm);
        (enm==1)?(p[i].level=minor):(p[i].level=major);
        printf("\nEnter name of the customer : ");
        scanf("%[^\n]s", str);
        p[i].policy_name=str;
        printf("\nEnter the duration (in years) :: ");
        scanf("%d", &p[i].duration_in_year);
    }
    for(int i = 0; i < n; i++) {
        printf("\n====================\n");
        printf("\n%d\t%d", p[i].g, p[i].level);
        printf("\t%s\t%d", p[i].policy_name, p[i].duration_in_year);
        printf("\n====================\n");
    }
    return 0;
}