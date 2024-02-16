#include<stdio.h>
#define PI 3.14
int main(){
    float r,s,v;
    printf("Enter radius: ");
    scanf("%f",&r);
    s=4*PI*r*r;
    v=4*PI*r*r*r/3;
    printf("\nSurface area of sphere is %.2f",s);
    printf("\nVolume of sphere is %.2f",v);
    return 0;
}


