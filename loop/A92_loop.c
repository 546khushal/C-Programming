//Auther:khushal kumar
/*wap to print given pattern
      1 
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4

*/
#include <stdio.h>

void pattern() {
    int i, j, k;

    for(i=1;i<=4;i++) {

        for(j=4; j>i;j--) {
            printf("  ");
        }

        for(k=i;k>=1;k--) {
            printf("%d ", k);
        }

        for(k = 2; k <= i; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }
}

void main() {
    pattern();
}

