/*Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
*/
#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int num)
{
    int sum = 0, u = 0, t = 0, h = 0;
    if (num > 0 && num < 10)
        return true;
    else if (num > 9 && num < 100)
        return false;
    else {
        u = num % 10;
        t = (num / 10) % 10;
        h = (num / 100) % 10;
        sum = (u * u * u) + (t * t * t) + (h * h * h);
        return (num == sum);
    }
}
int main()
{
    int i = 1;
    while (i <= 500)
    {
        if (isArmstrong(i))
            printf("%d, ", i);
        i++;
    }
    return 0;
}