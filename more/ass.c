#include <stdio.h>
void main() {
    int i = 3;
    while (i--) {
        int i = 100;  // Inner 'i'
        i--;
        printf("%d ", i);
    }
}
