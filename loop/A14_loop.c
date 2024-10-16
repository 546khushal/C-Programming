/*
WAP generate sum of two binary number
Author: Khushal
Date:
*/


#include <stdio.h>
int Is_binary(const int n){
    int num=n;
    int remainder;
    while(num>0){
        remainder=num%10;
        if(remainder !=1 && remainder !=0){
            return 0;
        }
        num=num/10;

    }
    return 1;
}

int BinaryToDecimal(int binary){
    int decimal =0, base=1,remainder;
    while(binary>0){
        remainder=binary%10;
        decimal = decimal + remainder * base;
        binary/=10;
        base*=2;
    }
    return decimal;
}
int DecimalToBinary(int decimal){
    int binary = 0, base=1,remainder;
    while(decimal>0){
        remainder=decimal%2;
        binary = binary + remainder * base;
        decimal/=2;
        base*=10;
    }
    return binary;
}

int Sum_binary(const int n1,const int n2){
    int add= BinaryToDecimal(n1)+BinaryToDecimal(n2);    
    return DecimalToBinary(add);
}


int main(){
    int n1,n2;
    printf("Enter 1st Binary Number:");
    scanf("%d",&n1);
    printf("Enter 2nd Binary Number:");
    scanf("%d",&n2);
    if(Is_binary(n1)==0 ){
        printf(" Entered Number %d is Not Binary",n1);
    }
    else if(Is_binary(n2)==0){
        printf(" Entered Number %d is Not Binary",n2);
    }

    else{
      printf(" sum of %d and %d is: %d",n1,n2,Sum_binary(n1,n2));  
    }
    
    return 0;
}