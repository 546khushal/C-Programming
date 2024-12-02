#include<stdio.h>
#include<string.h>
void main() {
    char P[10] ;
    char Q[10];
    int count=0,i,j,total,ps,qs;
    scanf("%s",P);
    scanf("%s",Q);
    ps=strlen(P);
    qs=strlen(Q);
    total=ps+qs;
    printf("total : %d\n",total);
    for(i=0;i<ps;i++){
	for(j=0;j<qs;j++){
	    if(P[i]==Q[j]){
		count++;
        Q[j]="\0";
		break;
	    }
	}

    }
    printf("count : %d\n",count);
    printf("%d",total-count);
}

