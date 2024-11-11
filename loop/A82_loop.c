//Auther:khushal kumar
/*wap to print given pattern
     *
    * *
   *   *
  *     *
 *       *
*         *
 *       *
  *     *
   *   *
    * *
     *
*/
#include <stdio.h>

void pattern() {
    int i, j, k;
    
    // Upper part of the pattern
    for (i = 1; i <= 6; i++) {
        
        for (j = 6; j > i; j--) {
            printf(" ");
        }
        
        printf("*");
        
        
        if (i > 1) {
            for (k = 1; k <= (i * 2) - 3; k++) {
                printf(" ");
            }
            
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the pattern
    for (i = 5; i >= 1; i--) {
        
        for (j = 6; j > i; j--) {
            printf(" ");
        }
      
        printf("*");
        
       
        if (i > 1) {
            for (k = 1; k <= (i * 2) - 3; k++) {
                printf(" ");
            }
            
            printf("*");
        }
        printf("\n");
    }
}

void main() {
    pattern();
}
