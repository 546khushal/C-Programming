//Auther:khushal kumar
/*wap to print given pattern
1 
1 3
1 3 5
1 3 5 7
*/
#include<stdio.h>

void pattern(){
    int i,j;
    
    // for(i=1;i<=4;i++){
    //         for(j=1;j<=i*2-1;j=j+2){
    //                 printf("%d ",j);
    //         }
         
    //     printf("\n");
        
    // } 

     for (i = 1; i <= 4; i++) {
        int num = 1;  
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num += 2;
        }
        printf("\n"); 
    }
}



void main(){
    pattern();
}
