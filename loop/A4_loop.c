/*
WAP tp print table of number
Auther:khushal
Date:*/
#include<stdio.h>
#include<conio.h>
void  Table(const int n){
    int i;
    for(i=1;i<=10;i++){
        printf("%2d * %2d = %3d\n",n,i,n*i);
    }
    
}
int main(){
    int n;
    printf("Enter Table Number:");
    scanf("%d",&n);
   
    Table(n);
    return 0;
}