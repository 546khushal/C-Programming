/*
print first 50 odd number .note that program should display only five number numbers per line
Auther:khushal
Date:*/
#include <stdio.h>
#include <conio.h>
void Print_n_odd(const int n){
    int i,count=0;
    for(i=1;i<=n*2;i+=2){    
        printf(" %3d ",i);
        count++;
        if(count==5){
            printf("\n");
            count=0;
        }
        
    }
}

int main(){
    int n;
    printf("Enter Number you want to print odd number:");
    scanf("%d",&n);
    Print_n_odd(n);
    return 0;
} 