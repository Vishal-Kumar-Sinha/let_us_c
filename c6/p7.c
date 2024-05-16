/**/
#include<stdio.h>
int main()
{
    int i=1,num,x,y,count;
    num = 10000;
    while(i<=num) {
        count=0;
        for(x=1;x*x*x<i;x++) {
            for(y=x;x*x*x+y*y*y<=i;y++) {
                if(x*x*x+y*y*y==i)
                  count++;
            }
        }
        if(count==2)
            printf("%d\n",i);
        i++;
    }
    return 0;
}