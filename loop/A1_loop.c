/*WAP in c to display a sum of first n even number
Auther:khushal
Date:*/
#include<stdio.h>
#include<conio.h>
int Sum_n_even(const int n){
    int i ,sum=0;
    // for(i=2;i<=n*2;i+=2){
    //     sum+=i;
    // }

    //other method
    int j=2;
    for(i=1;i<=n;i++){
        sum+=j;
        j+=2;
    }
    return sum;
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("Sum of first %d even Number is: %d",n,Sum_n_even(n));
    return 0;
}