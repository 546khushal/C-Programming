//Auther:khushal kumar
/*wap to print given pattern
A 
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>

void pattern(){
    int i,j;
    char Alpha;
    for(i=1;i<=5;i++){
        Alpha='A';
        for(j=1;j<=i;j++){
            printf("%c ",Alpha++);
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
