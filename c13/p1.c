#include<stdio.h>
#define EVEN(a) (a%2==0?1:0)
#define POSITIVE(a) (a>=0?1:0)
int main() {
    int arr[25],e=0,p=0;
    for(int i=0;i<25;i++) {
        scanf("%d",&arr[i]);
        if(EVEN(arr[i])==1)
            e++;
        if(POSITIVE(arr[i])==1)
            p++;
    }
    printf("positive=%d\nnegative=%d\nodd=%d\neven=%d",p,25-p,25-e,e);
    return 0;
}
/*Output::
-5 4 -3 2 -1 0 4 3 9 -45 87 3 56 -74 0 0 2 6 -4 8 -7 5 45 32 -75
positive=17
negative=8
odd=12
even=13
*/