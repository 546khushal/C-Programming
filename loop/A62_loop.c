//Auther:khushal kumar
/*wap to print given pattern
1   2   3  
4   5   6   
7   8   9

*/
#include<stdio.h>

void pattern(){
    int i,count=0;
    for(i=1;i<=9;i++){
        printf("%d\t",i);
        count++;
        if(count==3){
            printf("\n");
            count=0;
        }
        
    }

}

void main(){
    pattern();
}
