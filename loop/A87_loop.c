//Auther:khushal kumar
/*wap to print given pattern
1 
0 1
1 0 1
0 1 0 1
*/
#include<stdio.h>

void pattern(){
    int i,j;
    /* 
    for(i=1;i<=4;i++){
        if(i%2 !=0){
          for(j=1;j<=i;j++){
            if(j%2!=0){
                  printf("1 ");  
                }
            else{
                printf("0 ");
            }
           }  
        }
        else{
            for(j=0;j<i;j++){
                if(j%2==0){
                  printf("0 ");  
                }
                else{
                    printf("1 ");
                }
           }
        }
         
        printf("\n");
        
    } */

     for (i = 1; i <= 4; i++) {  
        int start = i % 2 == 0 ? 0 : 1;  
        
        for (j = 1; j <= i; j++) { 
            printf("%d ", start);
            start = 1 - start;  
        }
        printf("\n");
    }

}

void main(){
    pattern();
}
