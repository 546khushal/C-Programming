//Auther:khushal kumar
/*wap to print given pattern
     1 
    2 2 
   3 3 3 
  4 4 4 4 
 5 5 5 5 5  
*/
#include<stdio.h>

void pattern(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",i);
        }  
        
        printf("\n");
        
    }

    

}

void main(){
    pattern();
}
