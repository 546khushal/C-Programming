//Auther:khushal kumar
/*wap to print given pattern
* * * * * * *
* * *   * * *
* *       * *
*           *

*/
#include<stdio.h>

void pattern(){
    int i,j,k;
    for(i=4;i>=1;i--){
        for(j =1;j<=i;j++){
            printf("* ");
        }
        for(k=1;k<=(4-i)*2-1;k++){
            printf("  ");
        } 
        if(i==4){
            for(k=1;k<=i-1;k++){
            printf("* ");
           } 
        }
        else{
            for(k=1;k<=i;k++){
            printf("* ");
        } 
        }
        
        printf("\n");
        
    }

}

void main(){
    pattern();
}
