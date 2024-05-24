#include<stdio.h>
#include<string.h>
typedef struct animal {
    char name[30];
    int n;
} Animal;
void toRevBinary(int *info,int num) {
    int i=0;
    while(num>0) {
        info[i]=num%2;
        num=num/2;
        i++;
    }
}
 int main() {
    Animal a={"OCELOT", 18};
    int info[5];
    char food[10], family[10];
    toRevBinary(info,18);
    if(info[4]==1)
        strcpy("Herbivore",food);
    else
        strcpy("Carnivore",food);
    if(info[0]==1)
        strcpy("canine",family);
    else if(info[1]==1)
        strcpy("feline",family);
    else if(info[2]==1)
        strcpy("cetacean",family);
    else
        strcpy("marsupial",family);
    printf("This is an %s animal of %s family.", food, family);
    return 0;
 }