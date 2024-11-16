#include<stdio.h>
#include<conio.h>
#define ROW 10
#define COL 10
void ReadArray(int a[][COL],const int row,const int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}
void PrintArray(int a[][COL],const int row,const int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
}

void Minimum(int a[][COL],const int row,const int col)
{
	int i,j,min=a[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]<min){
			min=a[i][j];
			}
		}

	}
	printf("Minimum value of Array is: %d",min);
}

void Maximum(int a[][COL],const int row,const int col)
{
	int i,j,max=a[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>max){
			max=a[i][j];
			}
		}

	}
	printf("Maximum value of Array is: %d",max);
}
int SumElement(int a[][COL],const int row,const int col)
{
	int i,j,sum=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		sum+=a[i][j];
		}
	}
	return sum;
}

int AvgElement(int a[][COL],const int row,const int col)
{
	int total=row*col,sum;
	if(row==0 || col==0){
	printf("\nERROR: Cannot calculate average with zero row or columns.\n");
	return 0;
	}

	sum=SumElement(a,row,col);

	return sum/total;

}



void Transpose(int a[][COL],const int row,const int col)
{
	int i,j;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
		printf("%d ",a[j][i]);
		}
		printf("\n");

	}

}


void Addition(int a[][COL],int b[][COL],int c[][COL],const int row,const int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}

	PrintArray(c,row,col);
}

void Subtraction(int a[][COL],int b[][COL],int c[][COL],const int row,const int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		c[i][j]=a[i][j]-b[i][j];
		}
	}

	PrintArray(c,row,col);
}

void Multiplication(int a[][COL],int b[][COL],int c[][COL],const int row,const int col,int row2,int col2 )
{
	int i,j,k;

	for(i=0;i<row;i++)
	{
		for(j=0;j<col2;j++)
		{   for( k=0;k<col;k++){
			c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	PrintArray(c,row,col2);
}

int MagicMatrix(int a[][COL],const int row,const int col){
	int i,j,k,sum_row=0,sum_col=0,csum=0,crsum=0;
	int magic_sum=0;
	//int a[3][3]={  {2,7,6},
	//		{9,5,1},
	//		{4,3,8}};
	clrscr();

	for(i=0;i<3;i++){
		magic_sum+=a[0][i];
	}
	printf("Magic Sum is: %d\n",magic_sum);

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
       if(sum_row != magic_sum||sum_col!=magic_sum)
	{
	//printf("\nNot Magic Matrix");
	return -1;
	}
	printf("\n");
   //sum=0;
   //count=0;

	}
	printf("\nsum cross left to rigth : %d", csum);
	printf("\nsum cross right to left : %d",crsum);
	if(magic_sum != csum ||magic_sum != crsum){
	//printf("\nNot Magic Matrix.");
	return -1;
	}


}



void Menu()
{
	printf("\n1..Read");
	printf("\n2..Print");
	printf("\n3..Minimum");
	printf("\n4..Maximum");
	printf("\n5..Sum of elements");
	printf("\n6..Addition");
	printf("\n7..Subtraction");
	printf("\n8..Multiplication");
	printf("\n9..Transpose");
	printf("\n10.Magic MAtrix");
	printf("\n11.Exit");
	printf("\n\n\nEnter your choice : ");
}
void main()
{
	int a[ROW][COL],b[ROW][COL],c[ROW][COL],d[ROW][COL]={0,0};
	int row, col, ch,row2,col2;
	do
	{
	clrscr();
	Menu();
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: // Read
		clrscr();
		printf("\nEnter row: ");
		scanf("%d", &row);
		printf("Enter col: ");
		scanf("%d", &col);
		if(row < 1 || row > 10 || col < 1 || col > 10) {
		    printf("\nERROR: Invalid row/column size. Please enter between 1 and 10.");
		    getch();
		} else {
		    printf("\nEnter  %d elements of Matrix:\n", row * col);
		    ReadArray(a, row, col);
		}
		break;

		case 2: // Print
		if(row < 1 || col < 1) {
		    printf("\nERROR: No Array Elements to Print");
		    getch();
		} else {
		    printf("\nElements of array are:\n");
		    PrintArray(a, row, col);
		}
		break;

		case 3: // Minimum
		if(row < 1 || col < 1) {
		    printf("\nERROR: No Array Elements");
		    getch();
		} else {
		    Minimum(a, row, col);
		}
		break;

		case 4: // Maximum
		if(row < 1 || col < 1) {
		    printf("\nERROR: No Array Elements");
		    getch();
		} else {
		    Maximum(a, row, col);
		}
		break;
		case 5:  // Sum //avg
		if(row < 1 || col < 1) {
		    printf("\nERROR: No Array Elements");
		    getch();
		} else {
		    printf("\nSum of Array Element is: %d",SumElement(a, row, col));
		    printf("\nAverage of Array Element is: %d",AvgElement(a,row,col));
		}
		break;
		case 6:  //Addition
		printf("Enter Size for the Matrix A...\n");
		printf("\nEnter row: ");
		scanf("%d", &row);
		printf("\nEnter col: ");
		scanf("%d", &col);
		if(row < 1 || row > 10 || col < 1 || col > 10) {
		    printf("\nERROR: Invalid row/column size. Please enter between 1 and 10.");
		    getch();
		} else {
		    printf("\nEnter %d elements of Matrix A:\n", row * col);
		    ReadArray(a, row, col);
		    printf("\nEnter Size for the Matrix B...\n");
		    printf("Enter row: ");
		    scanf("%d",&row2);
		    printf("Enter col: ");
		    scanf("%d",&col2);

		    if(row!=row2 ||col !=col2){
			printf("\nERROR:Matrices must have the same order for addition.\n");
		    }else{
			printf("Enter %d element of Matrix B: \n",row2*col2);
			ReadArray(b,row,col);
			printf("Matrix A is: \n");
			PrintArray(a,row,col);
			printf("B Matrix B  is: \n");
			PrintArray(b,row,col);
			printf("\nAddition of matrix A and B is: \n");
			Addition(a,b,c,row,col);
			}
		}
		break;
		case 7:  //Subtraction
		printf("Enter Size for the Matrix A...\n");
		printf("\nEnter row: ");
		scanf("%d", &row);
		printf("\nEnter col: ");
		scanf("%d", &col);
		if(row < 1 || row > 10 || col < 1 || col > 10) {
		    printf("\nERROR: Invalid row/column size. Please enter between 1 and 10.");
		    getch();
		} else {
		    printf("\nEnter %d elements of Matrix A:\n", row * col);
		    ReadArray(a, row, col);
		    printf("\nEnter Size for the Matrix B...\n");
		    printf("Enter row: ");
		    scanf("%d",&row2);
		    printf("Enter col: ");
		    scanf("%d",&col2);

		    if(row!=row2 ||col !=col2){
			printf("\nERROR:Matrices must have the same order for addition.\n");
		    }else{
			printf("Enter %d element of Matrix B: \n",row2*col2);
			ReadArray(b,row,col);
			printf("Matrix A is: \n");
			PrintArray(a,row,col);
			printf("B Matrix B  is: \n");
			PrintArray(b,row,col);
			printf("Subtraction of matrix A and B is: \n");
			Subtraction(a,b,c,row,col);
			}
		}
		break;
		case 8:  // Multi[lication
		printf("Enter Size for the Matrix A...\n");
		printf("\nEnter row: ");
		scanf("%d", &row);
		printf("\nEnter col: ");
		scanf("%d", &col);
		if(row < 1 || row > 10 || col < 1 || col > 10) {
		    printf("\nERROR: Invalid row/column size. Please enter between 1 and 10.");
		    getch();
		} else {
		    printf("\nEnter %d elements of Matrix A:\n", row * col);
		    ReadArray(a, row, col);
		    printf("\nEnter Size for the Matrix B...\n");
		    printf("Enter row: ");
		    scanf("%d",&row2);
		    printf("Enter col: ");
		    scanf("%d",&col2);

		    if(col !=row2){
			printf("\nERROR:Matrix multiplication is not posible .the no. of columns of A equal the no. o row B. \n");
		    }else{
			printf("Enter %d element of Matrix B: \n",row2*col2);
			ReadArray(b,row2,col2);
			printf("Matrix A is: \n");
			PrintArray(a,row,col);
			printf("B Matrix B  is: \n");
			PrintArray(b,row2,col2);
			printf("\nMultiplication of matrix A and B is: \n");
			Multiplication(a,b,c,row,col,row2,col2);
			}
		}
		break;
		case 9:  // Transpose
		printf("Befor Transpose Matrix:\n");
		PrintArray(a,row,col);
		printf("After Transpose Matrix:\n");
		Transpose(a,row,col);
		break;
		case 10:  //Magic Matrix
		if(row < 1 || col < 1) {
		    printf("\nERROR: No Array Elements to Print");
		    getch();
		} else {
			 if(MagicMatrix(a,row,col)!=-1){
			 printf("\nYour Matrix is : Magic Matrix");
			 }
			 else{
			 printf("\nNot Magic Metrix.");
			 }
		}
		break;
		case 11: //exit
		break;
		default:
		printf("Wrong choice");
	}
		getch();
	}while(ch!=11);
}


