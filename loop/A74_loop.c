//Auther:khushal kumar
/*wap to print given pattern
1       2       3       4
1       2       3
1       2
1
*/
#include<stdio.h>

void pattern(){
    int i,k;
    for(i=4;i>=1;i--){
        
        for(k=1;k<=i;k++){
            printf("%d\t",k);
            
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
