//Auther:khushal kumar
/*wap to print given pattern
*           * 
* *       * *
* * *   * * *
* * * * * * *
*/
#include<stdio.h>

void pattern(){
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        } 
        for(k=1;k<=(4-i)*2-1;k++){
            printf("  ");
        } 
        
        for(j = (i == 4) ? i-1 :i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
        
    }

}

void main(){
    pattern();
}
