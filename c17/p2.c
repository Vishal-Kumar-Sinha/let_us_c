#include <stdio.h>
struct customer
{
    int acc_no;
    char name[20];
    float balance;
};
void soln1(struct customer customers[], int n){
    printf("Details of the customers with balance below 1000:\n");
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 1000) {
            printf("Account number: %d\n", customers[i].acc_no);
            printf("Name: %s\n", customers[i].name);
        }
    }
    printf("There is no customer with balance below 1000\n");
}
void soln2(struct customer customers[], int n, int ano, int amount, int code){
    for (int i = 0; i < n; i++) {
        if (customers[i].acc_no == ano) {
            customers[i].balance -= amount;
            if (customers[i].balance < 1000)
                printf("Insufficient balance for withdrawal");
            else
                printf("Withdrawn %d and Remaining balance %d", amount, customers[i].balance);
        }
    }
    printf("Invalid account number\n");
}
int main() {
    printf("Enter number of customers: ");
    int n;
    scanf("%d", &n);
    struct customer customers[n];
    printf("Enter customer details: \n");
    for (int i = 0; i < n; i++) {
        printf("Enter customer %d account number::\n", i + 1);
        scanf("%d", &customers[i].acc_no);
        printf("Enter customer %d name::\n", i + 1);
        scanf(" %[^\n]", customers[i].name);
        printf("Enter customer %d balance::\n", i + 1);
        scanf("%f", &customers[i].balance);
    }
    soln1(customers, n);
    printf("Enter 1 for deposit and Enter 0 for withdrawl\n");
    int code;
    scanf("%d", &code);
    printf("Enter withdrawl amount:: \n");
    int amount = 0;
    scanf("%d", &amount);
    printf("Enter account no:: \n");
    int ano = 0;
    scanf("%d", &ano);
    if (code == 0)
        soln2(customers, n, ano, amount, code);
    else
        printf("Deposit amount %d\n", amount);
    return 0;
}