//Auther:khushal kumar
/*wap to print given pattern
A       a       A
a       A       a
A       a       A
*/
#include<stdio.h>

void pattern(){
    int i,j;
    
    for(i=1;i<=3;i++){
        if(i%2 !=0){
          for(j=1;j<=3;j++){
            if(j%2!=0){
                  printf("A\t");  
                }
            else{
                printf("a\t");
            }
           }  
        }
        else{
            for(j=0;j<3;j++){
                if(j%2==0){
                  printf("a\t");  
                }
                else{
                    printf("A\t");
                }
           }
        }
         
        printf("\n");
        
    } 

    

}

void main(){
    pattern();
}
