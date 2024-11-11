//Auther:khushal kumar
/*wap to print given pattern
 55555
  4444
   333
    22
     1
*/
#include<stdio.h>

void pattern(){
    int i,j,k;
    for(i=5;i>=1;i--){
        for(j=5;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",i);
        }  
        
        printf("\n");
        
    }

    

}

void main(){
    pattern();
}
