#include<stdio.h>
int main(){
    int n,temp,sum=0,fact,d,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while (n>0){
        d=n%10;
        fact=1;i=1;
        while (i<=d){
            fact*=i;
            i++;
        }
        sum+=fact;
        n/=10;   
    }

    if (sum==temp)
        printf("The number is a strong number");
    else
        printf("The number is not a strong number");
    return 0;

}