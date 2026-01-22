#include <stdio.h>
int main(){
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);

for(i=2;i<n;i=i+1){
    if(n % i==0){
        printf("%d is not a prime number\n", n);
        return 0;
    }
    }
    printf("%d is prime number", n);  
}
