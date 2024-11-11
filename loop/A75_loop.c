//Auther:khushal kumar
/*wap to print given pattern
1       2       3
        4       5
                6
*/
#include<stdio.h>

void pattern(){
    int i,j,k,num=1;
    for(i=3;i>=1;i--){
        for(j=1;j<=3-i;j++){
            printf("\t");
        } 
        for(k=1;k<=i;k++){
            printf("%d\t",num);
            num++;
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
