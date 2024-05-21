#include<stdio.h>

typedef struct animal {
    char name[30];
    int n;
} Animal;
int* toRevBinary(int num) {
    int bin[5];
    int i=0;
    while(num>0) {
        bin[i]=num%2;
        num=num/2;
        i++;
    }
}
 int main() {
    Animal a={"OCELOT", 18};
    int info[]=toRevBinary(18);
    char food[]=(info[4]==1?"Herbivore":"Carnivore");
    char family[]=(info[0]==1?"canine":(info[1]==1?"feline":(info[2]==1)?"cetacean":"marsupial"));
    printf("This is an %s animal of %s family.", food, family);
    return 0;
 }