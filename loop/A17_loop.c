/*
WAP to check  given number no. is krishnaMurti  or not  145 =1! + 4! + 5! =>1 + 24 + 150 => 145
Auther:khushal
Date:*/
#include <stdio.h>
#include <conio.h>
int Factorial(const int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}


int Is_KrishnaMurti(const int n){
    int remainder, krishnamurti=0;
    int number=n;
    while(number>0){
        remainder = number%10;
        krishnamurti += Factorial(remainder);
        number /=10;
        
    }
    return krishnamurti;
    
}

int main(){
    int n;
    printf("Enter Number to check Armstrong or not : ");
    scanf("%d",&n);
    if(n==Is_KrishnaMurti(n)){
        printf("Entered Number is KrishnaMurti");
    }
    else{
        printf("Entered Number is  not KrishnaMurti");
    }
}