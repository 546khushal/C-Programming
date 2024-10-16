/*An electric power distrubution company charge its consumers
for 1st 50 units rs 2.30
next  50  units rs 2.60
next 150 units rs 3.25
more than 300 units rs 4.35
*/
#include<stdio.h>

float Electric_Charge(const int units) {
    float count = 0;  // Initialize count to 0

    if (units <= 50) {
	count += units * 2.30;
    } 
    else if (units <= 100) {
	count += 50 * 2.30;
	count += (units - 50) * 2.60;
    } 
    else if (units <= 250) {
	count += 50 * 2.30;
	count += 50 * 2.60;
	count += (units - 100) * 3.25;
    } 
    else {
	count += 50 * 2.30;
	count += 50 * 2.60;
	count += 150 * 3.25;
	count += (units - 250) * 4.35; // 250 above
	  }

    return count;
}

int main(){
	int unit;
	float bill;
	//clrscr();
	printf("enter consumers units:");
	scanf("%d",&unit);
	bill=Electric_Charge(unit);
	printf("Charge Bill: Rs %g",bill);
	//getch();
	return 0;
}
