#include<stdio.h>
#include<conio.h>
void main(){
 int i,j,k,sum_row=0,sum_col=0,csum=0,crsum=0;
 int masic_sum=0;
 int a[3][3]={  {2,7,6},
		{9,5,1},
		{4,3,8}};
		clrscr();

  for(i=0;i<3;i++){
       masic_sum+=a[0][i];
  }
  printf("Masic Sum is: %d\n",masic_sum);

  for(i=0;i<3;i++){
   sum_row=0;
   sum_col=0;
   for(j=0;j<3;j++){
       printf("%d ",a[i][j]);
       sum_row+=a[i][j];
       sum_col+=a[j][i];
       if(i==j){
	csum+=a[i][j];
	}
       if(i+j==2){
       crsum+=a[i][j];
       }
       }
   printf(" = %d",sum_row);
   printf(" = %d",sum_col);
   if(sum_row != masic_sum||sum_col!=masic_sum || masic_sum != csum ||masic_sum != crsum){
    printf("not masic");
   }
   printf("\n");
   //sum=0;
   //count=0;

  }
  printf("\nsum cross left to rigth : %d", csum);
  printf("\nsum cross right to left : %d",crsum);
  getch();



}