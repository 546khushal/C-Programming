/*check input vowel or not
auther:khushal
Date:
*/
#include<stdio.h>
int Vowel_check(char ch){
	if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u'||ch=='A' || ch=='E'|| ch=='I' || ch=='O' || ch=='U'){
	return 1;
	}
	else{
	return 0;
	}
}
int main(){
	char ch;
	int check;
	//clrscr();
	printf("enter any character:");
	scanf(" %c",&ch);
	check=Vowel_check(ch);
	if(check==1){
	printf("entered charecter is Vowel ");
	}
	else{
	printf("entered character is Alphbate");
	}
    //	getch();
	return 0;
}