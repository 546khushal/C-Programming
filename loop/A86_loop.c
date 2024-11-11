//Auther:khushal kumar
/*wap to print given pattern
a b c d e 
 a b c d
  a b c
   a b
    a 
*/
#include <stdio.h>

void pattern() {
    int i, j, value;
    for (i = 5; i >=1; i--) { 
        for (j = 1; j <=5-i; j++) {
            printf(" ");
        }

        value = 'a'; 
        for (j = 1; j <= i; j++) {
            printf("%C ", value++);
        }
        printf("\n");
    }
}

void  main() {
    pattern();
}
