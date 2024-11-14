//Auther:khushal kumar
/*wap to print given pattern
1       2       3
        5       4
                6
*/
#include<stdio.h>

void pattern(){
    int i,j,k,num=1;
    for(i=1;i<=3;i++){
        for(j=1;j<i;j++){
            printf("\t");
        } 
        for(k=i;k<=3;k++){
            printf("%d\t",num);
            num++;
            if(num==4){
                num++;
            }
            else if(num==6){
                num-=2;
            }
            else if(num==5){
                num++;
            }
        }   
        printf("\n");
        
    }

}

void main(){
    pattern();
}
