//Auther:khushal kumar
/*wap to print given pattern
a       b       c
d       e       f
g       h       i
*/
#include<stdio.h>

void pattern(){
    int i,j;
    char ch='a';
    for(i=1;i<=3;i++){
          for(j=1;j<=3;j++){
                printf("%c\t",ch);
                ch++;
           } 

        printf("\n");
        
    } 

    

}

void main(){
    pattern();
}
