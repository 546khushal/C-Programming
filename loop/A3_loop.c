/*WAP in c to display a sum from 1 to given number
1)usingformulan(n+1)/2.
2)without fromula
Auther:khushal
Date:*/
#include<stdio.h>
#include<conio.h>
// int Sum_using_formula(const int n){
//     int i ,sum=0;
//     for(i=1;i<=n*(n+1)/2;i++){
//         sum+=i;
//     }
//     return sum;
// }
int Sum_using_formula(const int n) {
    return n * (n + 1) / 2;  
}

int Sum_without_formula(const int n){
    int i ,sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    
    //printf("\n(with formula ) Sum from 1 to %d is : %d",n*(n+1)/2,Sum_using_formula(n));
    printf("\n(with formula ) Sum from 1 to %d is : %d",n,Sum_using_formula(n));
    printf("\n(without formula) Sum from 1 to %d is : %d",n,Sum_without_formula(n));
    
    return 0;
}