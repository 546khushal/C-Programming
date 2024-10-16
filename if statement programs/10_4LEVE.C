/*a manufacturing company classified its executive into 4 levels....
auther:khushal
Date:
*/
#include<stdio.h>
#include<stdio.h>
int Perks(const int basic,int level){
	int hra,gross,net,income;
	hra=(basic*10)/100;
	switch(level) {
	case 1:
	    gross = basic + hra + 1000 + 500;
	    break;
	case 2:
	    gross = basic + hra + 750 + 200;
	    break;
	case 3:
	    gross = basic + hra + 500 + 100;
	    break;
	case 4:
	    gross = basic + hra + 250;
	    break;
	default:
	    printf("Invalid level\n");
	    return -1;
	}

    // Calculate income tax based on gross salary
    if(gross <= 2000) {
	net = gross;
    }
     else if(gross > 2000 && gross < 4000) {
	income = (basic * 3) / 100;
	net = gross - income;
    }
     else if(gross >= 4000 && gross < 5000) {
	income = (basic * 5) / 100;
	net = gross - income;
    }
     else {
	income = (basic * 8) / 100;
	net = gross - income;
    }

    return net;
}

int main(){
	int basic,level,net_salary;
	//clrscr();
	printf("enter basic salary:");
	scanf("%d",&basic);
	printf("enter level:");
	scanf("%d",&level);
	net_salary = Perks(basic, level);
	if(net_salary != -1) {
	printf("Net salary is: %d\n", net_salary);
	    }
	//getch();
	return 0;
	
	}