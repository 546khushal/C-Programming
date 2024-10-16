/*WAP in c to find out factorial od a given number.
Auther:khushal
Date:*/
#include<stdio.h>
#include<conio.h>
int Factorial(const int n){
    int i ,facto=1;
    for(i=1;i<=n;i++){
        facto*=i;
    }
    return facto;
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %d\n", n, Factorial(n));
    }
    return 0;
}