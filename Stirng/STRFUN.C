#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Upper(char *str)
{
    while(*str!='\0')
    {
	   if(*str>='a' && *str<='z')
	   {
		 *str=*str-32;
	   }
	   str++;
    }
}
void Lower(char *str)
{
    while(*str!='\0')
    {
	   if(*str>='A' && *str<='Z')
	   {
		 *str=*str+32;
	   }
	   str++;
    }
}

void Strcat(char *dest,char *src)
{
    while(*dest!='\0')
    dest++;
    while(*src!='\0')
    {
	  *dest=*src;
	  dest++;
	  src++;
    }
    *dest='\0';
}
void Strcpy(char *dest,char *src)
{
    while(*src!='\0')
    {
	  *dest=*src;
	  dest++;
	  src++;
    }
    *dest='\0';
}
int Strlen(char *str)
{
   int len=0;
   while(*str!='\0')
   {
	 len++;
	 str++;
   }
   return len;
}

void Strrev(char *str)
{
   int len=0;
   char *p,*q,t;
   len=Strlen(str);
   p=str;
   q=&str[len-1];
   while(p!=q)
   {
	 t=*p;
	 *p=*q;
	 *q=t;
	 p++;
	 q--;
   }

}

void Proper(char *str){
	int flag=0;
	if(*str>='a' && *str<='z'){
		*str=*str-32;
	}
	str++;
	while(*str!='\0'){
		if(*str==' '){
			flag=1;
		}
		if(*str>='A' && *str<='Z' && flag==0){
			*str=*str+32;
		}
		if(*str>='a' && *str<='z' && flag==1){
			*str=*str-32;
			flag=0;
		}
		str++;
	}
}

int Find(char *str,char cv){
	while(*str!='\0'){
		if(*str==cv)
			return 0;
		str++;
	}
	return 1;

}

int Strcmp(char *p,char *q){
	for(;*p==*q;p++,q++){
	 if(*p=='\0'){
	 return 0;
	 }
	 return *p-*q;
	}
}
int Palindrom(char *str) {
    char *t;
    strcpy(t, str);
    Strrev(str);

    if (strcmp(t, str) == 0) {
        return 0;  // Palindrome
    } else {
        return 1;  // Not palindrome
    }
}

void Delete(char *str,char ch){
	char *p,*q,*t;
	p=str;
	q=(char *)malloc(Strlen(str)*sizeof(ch));
	t=q;
	while(*p!='\0'){
		if(*p!=ch){
		*q=*p;
		q++;
		}
		p++  ;
	}
	*q='\0';
	q=t;
	Strcpy(str,q);
}

void Trim(char *str) {
    int flag = 0;
    char *p,*q,*t;
    p=str;
    q=(char *)malloc(Strlen(str)* 1);
    t=q;
    while (*p== ' ') {
	p++;
    }
    while(*p!='\0'){
	if(*p==' '&& flag==0){
	    *q=*p;
	    q++;
	    p++;
	    flag=1;
	}
	if(*p != ' ' && flag==0 ){
	*q=*p;
	q++;
	p++;
	continue;
	}
	if(*p==' ' && flag==1 ){
	p++;
	continue;
	}
	if(*p!=' ' && flag==1 ){
	flag=0;
	continue;
	}

    }
    *q='\0';
    q=t;
    Strcpy(str,q);
    printf("len  = %d\n",Strlen(str));
}

/*
void Trim(char *str) {
    int flag = 0;
    char *p,*q,*t;
    p=str;
    q=(char *)malloc(Strlen(str)* 1);
    t=q;
    while (*p== ' ') {
	p++;
    }
  while(*p != '\0'){
  if(*p!= ' '){
	if(flag==0 && q!=t){
		*q= ' ';
		q++;
	}
	*q = *p;
	q++;
	flag =1;
  }else {
    flag =0 ;
    }
    p++;
  }
  *q='\0';
  Strcpy(str,t);
   printf("len  = %d\n",Strlen(str));
  free(t);
}
*/
void Replace(char *str,char s,char d){
	char t;
	while(*str!='\0'){
		if(*str == s){
		 *str=d;
		}
		str++;
	}

}


int Str_Find(char *str,char *str1){
	char *p=str1;
	while(*str!='\0' ){
		char *updated =str;      //every time update with new str
		str1=p;   //again start with str 0
		while(*str1!='\0' && *updated == *str1){
			updated++;
			str1++;
		}
		//str1=p;   //again start with str 0
		if(*str1=='\0'){
		return 0;
		}
		str++;
	}

	return 1;
}


void Menu()
{
   printf("\n1..String length");
   printf("\n2..String Copy");
   printf("\n3..String Concatenate");
   printf("\n4..Lower Case");
   printf("\n5..Upper Case");
   printf("\n6..Proper Case");
   printf("\n7..Reverse");
   printf("\n8..Pelindrome");
   printf("\n9..Strcmp");
   printf("\n10..Find charcter");
   printf("\n11..Deleter charcter");
   printf("\n12..Replace charcter");
   printf("\n13..Reomove extra space");
   printf("\n14..Find String");
   printf("\n15..Exit");
   printf("\n\nEnter your choice : ");
}
void main()
{
    int ch;
    char cv,str[50],str1[50],str2[50]={"Hello "};
    char s,d;
    do
    {
	  clrscr();
	  Menu();
	  scanf("%d",&ch);
	  switch(ch)
	  {
		case 1://strlen
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nLength of %s = %d",str,Strlen(str));
		break;
		case 2://copy
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nThe Source String is : %s",str);
		Strcpy(str1,str);
		printf("\nThe Destination String is : %s",str1);
		break;
		case 3://Concatenate
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nThe Source String is : %s",str);
		Strcat(str2,str);
		printf("\nThe Destination String is : %s",str2);
		break;
		case 4://Lower
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nOrignal String is : %s",str);
		Lower(str);
		printf("\nString in Lower case is : %s",str);
		break;
		case 5://Upper
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nOrignal String is : %s",str);
		Upper(str);
		printf("\nString in Upper case is : %s",str);
		break;
		case 6://Proper
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nOrignal String is : %s",str);
		Proper(str);
		printf("\nString in Proper case is : %s",str);
		break;
		case 7://Reverse
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nOrignal String is : %s",str);
		Strrev(str);
		printf("\nString in Reverse case is : %s",str);
		break;
		case 8://Pelindrome
		printf("\nEnter first string : ");
		fflush(stdin);
		gets(str);

		if(Palindrom(str)==0){
			printf("Palindrom.");
		}else{
			printf("Not Palindrom.");
		}
		break;
		case 9://Strcmp
		printf("\nEnter first string : ");
		fflush(stdin);
		gets(str);
		printf("\nEnter second string : ");
		fflush(stdin);
		gets(str1);
		if(Strcmp(str,str1)==0){
			printf("Both String are same.");
		}else{
			printf("Both String are not same.");
		}

		break;
		case 10://Find char
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nEnter character to find : ");
		scanf("%c",&cv);
		if(Find(str,cv)==0){
			printf("Entered Character is present.");
		}else{
			printf("Entered Character is not present.");
		}
		break;
		case 11://Delete char
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nEnter character to delete : ");
		scanf("%c",&cv);
		Delete(str,cv);
		printf("\nString After Delete character %c is : %s",cv,str);
		break;
		case 12://Replace char
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nEnter the character to replace : ");
		scanf("%c",&s);
		getchar();
		printf("\nEnter the replacement character  : ");
		scanf("%c",&d);
		Replace(str,s,d);
		printf("\nString After Replace is : %s",str);
		break;
		case 13://Trim
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nOrignal String is : %s",str);
		Trim(str);
		printf("\nString After Trim is : %s",str);

		break;
		case 14://Find string
		printf("\nEnter any string : ");
		fflush(stdin);
		gets(str);
		printf("\nEnter Search string : ");
		fflush(stdin);
		gets(str1);
		if(Str_Find(str,str1)==0){
			printf("Entered String is present.");
		}else{
			printf("Entered String is not present.");
		}
		break;
		case 15://Exit
		clrscr();
		gotoxy(35,12);
		printf("Thank You");
		break;
		default:
		printf("\nWrong choice");

	  }
	  getch();
    }while(ch!=15);
}