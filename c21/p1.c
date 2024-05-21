#include <stdio.h>
#include <math.h>

#define LS(x) (1<<x)

int toDecimal(int *num) {
    int dec = 0;
    for(int i=0;i<9;i++)
        dec+=num[i]*(int)pow(2,8-i);
    return dec;
}

int addData() {
    int info[9];
    printf("1.Cricket\n2.Basketball\n3.Football\n4.Hockey\n5.Lawn Tennis\n6.Table Tennis\n7.Carom\n8.Chess\n9.Kabaddi");
    printf("\nEnter 1 for win and 0 for lose for all game :: ");
    for(int i=0;i<9;i++)
        scanf("%d",&info[i]);
    return (toDecimal(info));
}

int main() {
    int count=0;
    unsigned int andmsk,j;
    int game=addData();
    for(i=0;i<9;i++) {
        andmsk=LS(i);
        j=(game & andmsk);
        if(j==andmsk)
            count++;
    }
    if(count>=5)
        printf("\nEligible for champions trophy.\n");
    else
        printf("\nNot eligible for champions trophy.\n");
    return 0;
}