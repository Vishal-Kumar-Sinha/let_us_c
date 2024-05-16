/*
Write a program to find the grace marks for a student using switch. 
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic: 
i) If the student gets first class and he fails in more than 3 
subjects, he does not get any grace. Otherwise, he gets a grace
of 5 marks per subject. 
ii) If the student gets second class and he fails in more than 2 
subjects, he does not get any grace. Otherwise, he gets a grace
of 4 marks per subject. 
iii) If the student gets third class and he fails in more than 1 
subject, then he does not get any grace. Otherwise, he gets a 
grace of 5 marks.
*/
#include<stdio.h>
int main() {
    int cl=0,sub=0;
    printf("0: First Class\n1: Second Class\n2: Third Class\n");
    scanf("%d %d",&cl,&sub);
    switch(cl) {
    case 0:
        if(sub>3) printf("No grace");
        else printf("5 marks grace per subject");
        break;
    case 1:
        if(sub>2) printf("No grace");
        else printf("4 marks grace per subject");
        break;
    case 2:
        if(sub>1) printf("No grace");
        else printf("5 marks grace per subject");
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}