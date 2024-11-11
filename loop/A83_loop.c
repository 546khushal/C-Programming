//Auther:khushal kumar
/*wap to print given pattern
* * * * * * 
*         *
*         *
*         *
*         *
* * * * * *

*/
#include <stdio.h>

void pattern() {
    int i, j,n=6;
    
    // Upper part of the pattern
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || j== 0 || i==n-1 || j==n-1) {
                printf("* ");
            }
            else{
                printf("  ");
            }  
        }
        printf("\n");
    }

}

void main() {
    pattern();
}
