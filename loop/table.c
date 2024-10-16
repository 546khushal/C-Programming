/*
WAP tp print table of number
Auther:khushal
Date:*/
#include<stdio.h>
#include<conio.h>
void  Table(const int n,int s,int e){
    int i;
    for(i=s;i<=e;i++){
        printf("%2d * %2d = %3d\n",n,i,n*i);
    }
    
}
int main(){
    int n,s,e;
    printf("Enter Table Number:");
    scanf("%d",&n);
    printf("Enter Starting  Number:");
    scanf("%d",&s);
    printf("Enter Ending Number:");
    scanf("%d",&e);
    Table(n,s,e);
    return 0;
}