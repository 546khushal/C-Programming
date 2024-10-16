/*12 grade calculation
auther:khushal
*/
#include<stdio.h>

int Grade(const int s1,const int s2, const int s3) {
    int total=s1+s2+s3;
    if (total>=80) {
      return 1;
    }
    else if (total>=70 && total<80) {
    return 2;
	}
    else if (total>=60 && total<70) {
    return 3;
    }
    else if(total>=50 && total<60) {
    return 4;
	 }


}

int main(){
	int s1,s2,s3,grade;
	//clrscr();
	s1=32;
	s2=32;
	s3=32;
	grade=Grade(s1,s2,s3);
	switch(grade){
	case 1:printf("Your Total marks : %d \nGrade is: A+ ",s1+s2+s3);
		break;
	case 2:printf("Your Total marks : %d \nGrade is: A ",s1+s2+s3);
		break;
	case 3:printf("Your Total marks : %d \nGrade is: A- ",s1+s2+s3);
		break;
	case 4:printf("Your Total marks : %d \nGrade is: B+ ",s1+s2+s3);
		break;
	default:printf("grade is not define under 50");

	}
   //getch();
   return 0;
}
