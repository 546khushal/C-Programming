//Auther:khushal kumar
/*wap to print given pattern
      * 
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
*/
#include<stdio.h>

void pattern(){
    int i,j,k;
    for(i=1;i<=6;i++){
        for(j=6;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }  
        
        printf("\n");
        
    }

    for(i=5;i>=1;i--){
        for(j=6;j>=i;j--){
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
