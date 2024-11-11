//Auther:khushal kumar
/*wap to print given pattern
*
**
***
****
*/
#include<stdio.h>

void pattern(){
    int i,k;
    for(i=1;i<=4;i++){
        
        for(k=1;k<=i;k++){
            printf("*");
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
