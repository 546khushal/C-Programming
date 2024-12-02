#include<stdio.h>
#include<conio.h>
//Accessing Array using Pointer
void Arr(){
	int a[]={1,2,3,4,5},i;
	int *p;
	p=a;    /* array ka name khud ek pointer ki trh kaam krta hai,
		jo ary ke pehle element ka address hold karta hai */
	for(i=0;i<5;i++){
		//printf("%5d",a[i]);        //1 2 3 4 5
		//printf("%5d",p[i]);        //1 2 3 4 5
		//printf("%5d",*(a+i));      //1 2 3 4 5
		//printf("%5d",*(i+a));      //1 2 3 4 5
		//printf("%5d",*(p+i));      //1 2 3 4 5
		//printf("%5d",*(i+p));      //1 2 3 4 5
		//printf("%5d",i[a]);        //1 2 3 4 5
		//printf("%5d",i[p]);        //1 2 3 4 5
		printf("%5d",*p++);        //1 2 3 4 5

	}

}
/*
  int (*q)[2]; ->Pointer of 2D Array
  int *p[2];   ->pointer of Array
*/

//Accessing two diamentional Array using Pointer
void Arr2(){
	int i,j,a[][2]={{1,2},{3,4},{5,6}};
	int (*q)[2];
	q=a;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			//printf("%5d",a[i][j]);
			//printf("%5d",q[i][j]);
			//printf("%5d",(*(q+i))[j]);
			//printf("%5d",*(*(q+i)+j));
			//printf("%5d",*(a[i]+j));
			//printf("%5d",*(*(a+i)+j));
		}
		printf("\n");
	}

}




void main(){
	clrscr();
	//Arr();
	Arr2();
	getch();
}