#include <stdio.h>
struct part {
    char serial_number[3];
    int year_of_manufacture;
    char material[20];
    int quantity_manufactured;
};
void retrieveParts(struct part parts[], int n) {
    printf("Information on parts with serial numbers between B1 and C3:\n");
    for (int i = 0; i < n; i++) {
        if ((parts[i].serial_number[0] >= 'B' && parts[i].serial_number[0] <= 'C') && (parts[i].serial_number[1] >= '1' && parts[i].serial_number[1] <= '3')) {
            printf("Serial number: %s\n", parts[i].serial_number);
            printf("Manufacturing year: %d\n", parts[i].year_of_manufacture);
            printf("Material of the part: %s\n", parts[i].material);
            printf("Manufacturing quantity: %d\n", parts[i].quantity_manufactured);
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    struct part parts[n];
    for(int i = 0; i < n; i++) {
        printf("Enter part %d details:: \n", i + 1);
        printf("Enter sl no:: ");
        scanf(" %[^\n]", parts[i].serial_number);
        printf("Enter yr of manufacturing:: ");
        scanf("%d", &parts[i].year_of_manufacture);
        printf("Enter material:: ");
        scanf(" %[^\n]", parts[i].material);
        printf("Enter manufacturing quantity:: ");
        scanf("%d", &parts[i].quantity_manufactured);
    }
    retrieveParts(parts, n);
    return 0;
}