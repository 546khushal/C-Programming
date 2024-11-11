//Auther:khushal kumar
/*wap to print given pattern
1 
A B
1 2 3
A B C D
1 2 3 4 5
*/
#include<stdio.h>

void pattern(){
    int i,j;
    for(i=1;i<=5;i++){
       //int alpha =65;
        for(j=1;j<=i;j++){
            if(i%2!=0){ 
            printf("%d ",j);
            }  
            else{
                // printf("%c ",alpha);
                // alpha++;
                printf("%c ", 'A' + j-1);
            }
        }
        
        printf("\n");
        
    }

}

void main(){
    pattern();
}
