/*finf root of quadratic equation
auther:khushal
Date:
*/
#include<stdio.h>
#include<math.h>
void  Root_quadratic_equ(int a,int b,int c){
	float x1,x2,r;
	r=b * b - 4 * a * c;

    if (r > 0) {
	// Two distinct real roots
	x1 = (-b + sqrt(r)) / (2 * a);
	x2 = (-b - sqrt(r)) / (2 * a);
	printf("Roots are real and different: %g, %g\n", x1, x2);
    }
    else if (r == 0) {
	// One repeated real root
	x1 = -b / (2 * a);
	printf("Roots are real and equal: %g\n", x1);
    }
    else {
	printf("Roots are complex");
    }

}


int main(){
      int a,b,c;
      //clrscr();
      a=1;
      b=5;
      c=6;
      Root_quadratic_equ(a,b,c);
     // getch();
      return 0;
      }
