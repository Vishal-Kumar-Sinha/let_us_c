#include<stdio.h>
#include<math.h>
float getR(float *x,float *y,int n) {
    float sum_xy=0.0,sumx=0.0,sumy=0.0,sumx2=0.0,sumy2=0.0;
    for(int i=0;i<n;i++) {
        sum_xy+=x[i]*y[i];
        sumx2+=x[i]*x[i];
        sumx+=x[i];
        sumy+=y[i];
        sumy2+=y[i]*y[i];
    }
    return ((sum_xy-(sumx*sumy))/(sqrt(((n*sumx2)-(sumx*sumx))*((n*sumy2)-(sumy*sumy)))));
}
int main() {
    float x[]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
    float y[]={102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.18,91.59,94.85,94.65};
    int n=sizeof(x)/sizeof(x[0]);
    printf("%f",getR(x,y,n));
    return 0;
}