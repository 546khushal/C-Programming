//Auther:khushal kumar
/*wap to print given pattern
1
2 3
4 5 6 
7 8 9 10
*/
#include<stdio.h>

void pattern(){
    int i,k,num=1;
    for(i=1;i<=4;i++){
        
        for(k=1;k<=i;k++){
            printf("%d ",num);
            num++;
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
