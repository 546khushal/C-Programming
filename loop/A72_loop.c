//Auther:khushal kumar
/*wap to print given pattern
1
1 2 3
1 2 3 4 
1 2 3 4 5 
*/
#include<stdio.h>

void pattern(){
    int i,k;
    for(i=1;i<=5;i++){
        
        for(k=1;k<=i;k++){
            printf("%d ",k);
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
