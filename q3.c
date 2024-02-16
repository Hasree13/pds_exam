#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,d;
    printf("Enter a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if (d<0){
        printf("Imaginary roots");
    }
    else if (d==0){
        x1=(-b)/2*a;
        printf("Real and equal roots exist\n");
        printf("x = %.2f",x1);
    }
    else{
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("Real and distinct roots\n");
        printf("x1 = %.2f, x2 = %.2f",x1,x2);
    }
    return 0;
}