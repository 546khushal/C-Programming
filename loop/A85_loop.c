//Auther:khushal kumar
/*wap to print given pattern
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1  
*/
#include <stdio.h>

void pattern() {
    int i, j, value;
    for (i = 0; i < 5; i++) { 
        for (j = 5; j > i + 1; j--) {
            printf(" ");
        }

        value = 1; 
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
        
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

void  main() {
    pattern();
}
