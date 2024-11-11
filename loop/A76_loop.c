//Auther:khushal kumar
/*wap to print given pattern
9       8       7
6       5       4
3       2       1
*/
#include<stdio.h>

void pattern(){
    int i,k,num=9;
    for(i=1;i<=3;i++){
        for(k=1;k<=3;k++){
            printf("%d\t",num);
            num--;
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
