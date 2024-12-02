/*Dynamic memory allocation 2D Array
use stdlib.h for malloc,calloc,realloc,free
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//two Diamentional Array Part
void Read(int **a,int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%5d",&a[i][j]);
		}

	}

}
void Print(int **a,int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf("%5d",a[i][j]);
		}
	  printf("\n");
	}

}


void main(){
	int **a;
	int i,row,col;
	clrscr();
	printf("\nEnter row size : ");
	scanf("%d",&row);
	a = (int **) malloc(row*sizeof(int *));
	printf("\nEnter column size : ");
	scanf("%d",&col);
	for(i=0;i<row;i++){
	a[i]=(int *)malloc(col*sizeof(int));
	}
	printf("\nEnter %d Element : ",row*col);
	Read(a,row,col);
	printf("\nThe 2D Array is :\n");
	Print(a,row,col);

	for(i=0;i<row;i++){
	free(a[i]);
	}
	free(a);
	getch();

}