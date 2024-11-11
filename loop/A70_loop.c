//Auther:khushal kumar
/*wap to print given pattern
$$$$$
$$$$
$$$
$$
$
*/
#include<stdio.h>

void pattern(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=5;j>5-i;j--){
            printf("$");
        }
         
        
        printf("\n");
        
    }

    

}

void main(){
    pattern();
}
