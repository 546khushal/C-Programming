//Auther:khushal kumar
/*wap to print given pattern
6       5       4
        3       2
                1
*/
#include<stdio.h>

void pattern(){
    int i,j,k,num=6;
    for(i=3;i>=1;i--){
        for(j=1;j<=3-i;j++){
            printf("\t");
        }
        for(k=1;k<=i;k++){
            printf("%d\t",num);
            num--;
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
