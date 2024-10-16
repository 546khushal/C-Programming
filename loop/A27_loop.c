/*WAP to find wheater the given number is circular prime or not
Auther:
Date: 
*/
#include<stdio.h>
int Is_prime(int n){
    int i;
    if(n<=1){
        return 0;
    }

    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}

int Is_circular_prime(int n){
    int i,remainder,c_no=n,digits=0,base=1;
    int temp_n=n;
    while(temp_n>0){
        temp_n/=10;
        base*=10;
        digits++;
    }
     base /= 10; // Adjust base (one less power of 10)
    
    for(i=0;i<digits;i++){
        if (!Is_prime(c_no)) {
            return 0; // If any rotation is not prime
        }
        printf("\n %d",c_no);
         remainder=c_no %10;
        c_no /=10;
        c_no=remainder*base+c_no;
    
    }
    return 1;
    
}

int main() {
    int num;
    
    printf("Enter a number to check if it's a circular prime: ");
    scanf("%d", &num);
    
    if (Is_circular_prime(num)) {
        printf("\n%d is a circular prime number.\n", num);
    } else {
        printf("\n%d is not a circular prime number.\n", num);
    }

    return 0;
}
