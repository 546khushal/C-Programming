#include<stdio.h>
#include<conio.h>
//sum of n odd number 
int Sum_odd(const int n){
    //int i,sum=0,j=1;
    // for(i=1;i<=n;i++){
    //     sum+=j;
    //     j+=2;

    //2nd method
    int i,sum=0;
    for(i=1;i<=n*2;i+=2){
        sum+=i;
    
     }

    return sum;
}
//sum of n even number
int Sum_even(const int n){
    int i,sum=0,j=2;
    for(i=1;i<=n;i++){
        sum+=j;
        j+=2;
    

    //2nd method
    // int i,sum=0;
    // for(i=2;i<=n*2;i+=2){
    //     sum+=i;
    
    }

    return sum;
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("\nSum of odd First %d Number: %d",n,Sum_odd(n));
    printf("\nSum of even First %d Number: %d",n,Sum_even(n));
    
    return 0;
}