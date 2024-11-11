//Auther:khushal kumar
/*wap to print given pattern
 1491625
  14916
   149
    14
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
                printf("%d",k*k);
            
        }  
        
        printf("\n");
        
    }

    

}

void main(){
    pattern();
}
