/*Dynamic memory allocation Array
use stdlib.h for malloc,calloc,realloc,free
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//one Diamentional Array Part
void Read(int *a,int size){
	int i;
	for(i=0;i<size;i++){
		scanf("%5d",&a[i]);
	}

}
void Print(int *a,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%5d",a[i]);
	}

}


void main(){
	int *a;
	int size;
	clrscr();
	printf("\nEnter Size : ");
	scanf("%d",&size);
	a= (int *) malloc(size*sizeof(int));
	printf("\nEnter %d Element : ",size);
	Read(a,size);
	printf("\nArray is :\n");
	Print(a,size);
	free(a);
	getch();

}