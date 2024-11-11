//Auther:khushal kumar
/*wap to print given pattern
1   2   3   4
1   2   3   4
1   2   3   4
1   2   3   4
*/
#include<stdio.h>

void pattern(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }

}

void main(){
    pattern();
}
