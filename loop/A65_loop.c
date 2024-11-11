//Auther:khushal kumar
/*wap to print given pattern
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>

void pattern(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }  
        
        printf("\n");
        
    }

    

}

void main(){
    pattern();
}
