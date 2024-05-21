#include <stdio.h>
#include <math.h>

#define LS(x) (1<<x)

void showinfo(int a) {
    int search=0;
    for(int i=0;i<16;i++) {
        if(a&LS(i)) {
            if(i<4) {
                switch(i) {
                case 0:
                    printf("First ");
                    break;
                case 1:
                    printf("Second ");
                    break;
                case 2:
                    printf("Thrid ");
                    break;
                case 3:
                    printf("Fourth ");
                default:
                    printf("Invalid ");
                }
                printf("Year, ");
            }
            else if(i>7)
                search+=int(pow(2,i-8));
            else {
                switch(i) {
                case 4:
                    printf("Mechanical");
                    break;
                case 5:
                    printf("Chemical");
                    break;
                case 6:
                    printf("Electronics");
                    break;
                case 7:
                    printf("IT");
                default:
                    printf("Invalid");
                }
                printf(" Branch\n");
            }
        }
    }
    printf("Room Number: %d\n", search);
}

int main()
{
    int rnum, search;
    int data[] = {273, 548, 786, 1096};
    for(int i = 0; i < 4; i++) {
        search = 0;
        for(int j = 8; j < 16; j++) {
            if(data[i] & LS(j))
                search+=int(pow(2, j-8));
        }
        showinfo(data[i]);
    }
    return 0;
}