/*
Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows: 
 There are 21 matchsticks. 
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking. 
 Whoever is forced to pick up the last matchstick loses the game. 
*/
#include<stdio.h>
int main()
{
    int ms1, ms2, mr = 21, k ;
    while(mr>=0) {
        printf("please choose stick/s 1/2/3/4 from the remaining %d sticks\n" , mr );
        scanf("%d", &ms1 );
        mr = mr - ms1; 
        k = mr%2;
        if (k == 0 && mr>5 ) {
            printf("computer choose 2 sticks\n");
            ms2 = 2;
        }
        else if (k == 1 && mr>5 ) {
            printf("computer choose 1 stick\n");
            ms2 = 1;
        }
        else  if (mr==5) {
            printf("computer choose 4 sticks\n");
            ms2 = 4;
        }
         else  if (mr==4) {
            printf("computer choose 3 sticks\n");
            ms2 = 3;
        }
         else  if (mr==3) {
            printf("computer choose 2 sticks\n");
            ms2 = 2;
        }
         else  if(mr==2) {
            printf("computer choose 1 sticks\n");
            ms2 = 1;
        }
         else if(mr==1)
            printf("user is the winner\n");
         else if(mr==0)
           printf("computer is the winner\n");
        mr-=ms2 ;
    }
    return 0; 
}