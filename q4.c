#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i,j,t=0;
    int n1=1,n2=n-1;
    while (n1<=n2){
        for (i=2;i<n1;i++){
            if (n1%i==0)
              break;
        }
        for (j=2;j<n2;j++){
            if (n2%j==0)
              break;
        }
        if (i==n1 && j==n2){
            printf("%d %d\n",n1,n2);
            t=1;
        }
        n1++;n2--;
    }
    if (t==0)
    printf("The number cannot be represented as a sum of primes");
    return 0;
}
        




