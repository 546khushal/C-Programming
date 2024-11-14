/*
Array
Name:khushal
Date:
*/
#define SIZE  50
#include<stdio.h>
#include<conio.h>

void ReadArray(int a[],const int size)
{
	int i;
	for(i=0;i<size;i++){
	scanf("%d",&a[i]);
	}
}
void PrintArray(int a[],const int size)
{
	int i;
	for(i=0;i<size;i++){
	printf("%d\t",a[i]);
	}
}

void SumArray(int a[],const int size)
{
	int i,sum=0;
	for(i=0;i<size;i++){
	 sum+=a[i];

	}
	printf("\nSum of Array : %d",sum);
}

void AvgArray(int a[],const int size)
{
	int i,sum=0,avg;
	for(i=0;i<size;i++){
	 sum+=a[i];
	}
	avg=sum/size;
	printf("\nAverage of Array : %d",avg);
}

void InsertElement(int a[],const int size,int value,int position)
{
	int i;
	if(position< 0 || position>size){
		printf("\nInvalid Position! Please Enter Position between 0 to %d",size);
	   }

      for(i=size;i>position;i--){
		a[i]=a[i-1];
	}
	a[position]=value;
	printf("\nElement Inserted Successfully\n");
}

void DeleteElement(int a[],const int size,int position){
	int i;
	if(position< 0 || position>size){
		printf("\nInvalid Position! Please Enter Position between 0 to %d",size);
	   }

	for(i=position;i<size-1;i++){
	a[i]=a[i+1];
	}
	printf("\nElement deleted Successfully\n");
}


int LenearSearch(int a[],const int size,int value){
	int i;
	for(i=0;i<size;i++){
	    if(a[i]==value){
		return 1;
	    }
	}
	return -1;


}

int Minimum(int a[],const int size){
	int min,i;
	min=a[0];
	for(i=0;i<size;i++){
		if(a[i]<min){
		    min=a[i];
		}

	}
	//printf("Minimum Value of Array: %d",min);
	return min;
}

int Maximum(int a[],const int size){
	int max,i;
	max=a[0];
	for(i=0;i<size;i++){
		if(a[i]>max){
		    max=a[i];
		}

	}
	//printf("Maximum Value of Array: %d",max);
	return max;
}

void BubbleSort(int a[],const int size){
	int i,j,tmp;
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}

void SelectionSort(int a[], const int size) {
    int i,j,minIndex,tmp;
    for (i=0;i<size-1;i++) {
	minIndex = i;
	for (j=i+1;j<size;j++) {
	    if (a[j] < a[minIndex]) {
		minIndex = j;
	    }
	}
	tmp = a[i];
	a[i] = a[minIndex];
	a[minIndex] = tmp;
    }
}

void InsertionSort(int a[],const int size){
	int i,curr,prev;
	for(i=1;i<size;i++){                //i start from 1 but array start from 0
		curr=a[i];                   //in key=a[i]  start from i=1
		prev=i-1;
		while(prev>=0 && a[prev]>curr){
			a[prev+1]=a[prev];
			prev--;
		}
		a[prev+1]=curr;  //place the curr element in its currect position
	}
}


void Menu(){
    printf("\n1..Read Array");
    printf("\n2..print Array");
    printf("\n3..Sum");
    printf("\n4..Avarage");
    printf("\n5..Insert Element");
    printf("\n6..Delete Element");
    printf("\n7..Linear Search");
    printf("\n8..Binary Search");
    printf("\n9..Bubble Sort");
    printf("\n10.Selection Sort");
    printf("\n11.Insertion Sort");
    printf("\n12.Minimum");
    printf("\n13.Maximum.");
    printf("\n14.Exit");
    printf("\n\nEnter your Choice : ");

    //int  arr[]={1,2,3,4,5};
    //int i;
    //for(i=0;i<5;i++){
      //	printf("%d ",arr[i]);
    //}
}



void main(){
	int ch,size,value,pos;
	int a[SIZE];
    do{
	clrscr();
	Menu();
	scanf("%d",&ch);

	switch(ch)
	{
	case 1://Read
	do{
		printf("\nEnter Size of Array : ");
		scanf("%d",&size);
		if(size<1 || size>50)
		{ printf("\nERROR:size must  be between 1 to 50");
		  getch();
		}
		}while(size<1 || size>50);
		printf("Enter %d Element of an Array",size);
		ReadArray(a,size);
	break;
	case 2://Print
	PrintArray(a,size);
	break;
	case 3://Sum
	SumArray(a,size);
	break;
	case 4://Average
	AvgArray(a,size);
	break;
	case 5://Insert Element
	printf("\nEnter value to insert: ");
	scanf("%d",&value);
	printf("\nEnter position 0 to %d:",size);
	scanf("%d",&pos);
	InsertElement(a,size,value,pos);
	break;
	case 6://Delete Element
	printf("\nEnter position to Delete Item between 0 to %d:",size);
	scanf("%d",&pos);
	DeleteElement(a,size,pos);
	break;
	case 7://Linear Search
	printf("Enter Value to Find :");
	scanf("%d",&value);
	if(LenearSearch(a,size,value)==1){
		printf("Element %d is Present in Array",value);
	}
	else{
		printf("Element %d is Not present in Array",value);
	}
	break;
	case 8://Binary Search

	break;
	case 9://Bubble Sort
	printf("\nArray Befor Sorting\n");
	PrintArray(a,size);
	printf("\nArray After Bubble Sorting\n");
	BubbleSort(a,size);
	PrintArray(a,size);
	break;
	case 10://Selection Sort
	printf("\nArray Befor Sorting\n");
	PrintArray(a,size);
	printf("\nArray After Selection Sorting\n");
	SelectionSort(a,size);
	PrintArray(a,size);
	break;
	case 11://Insertion Sort
	printf("\nArray Befor Sorting\n");
	PrintArray(a,size);
	printf("\nArray After Insertion Sorting\n");
	InsertionSort(a,size);
	PrintArray(a,size);
	break;
	case 12://Minimum
	printf("Minimum Value of Array: %d",Minimum(a,size));

	break;
	case 13://Maximum
	printf("Maximum Value of Array: %d",Maximum(a,size));
	break;
	case 14://Exit
	clrscr();
	gotoxy(31,12);
	printf("Thank You");
	break;
	default:
	printf("Enter Right Choice");
	}
	getch();
     }while(ch!=14);

}