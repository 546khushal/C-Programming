//Auther:khushal kumar
/*wap to print given pattern
1           1 
1 2       2 1
1 2 3   3 2 1
1 2 3 4 3 2 1
*/
#include<stdio.h>

void pattern(){
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        } 
        for(k=1;k<=(4-i)*2-1;k++){
            printf("  ");
        } 
        
        for(j = (i == 4) ? i-1 :i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
        
    }

}

void main(){
    pattern();
}
