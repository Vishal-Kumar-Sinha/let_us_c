/**/
#include<stdio.h>
int main()
{
    float population = 100000;
    for(int i=1;i<=10;i++)
    {
        population += population*0.1; 
        printf("%d year: %d\n",i, (int)population);
    }
    return 0;
}