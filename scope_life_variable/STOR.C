#include "ext.c"

/*
		  Memory   Life     Scope   default
					    value

      auto        RAM      Scope    local    garbage

      register    reister  Scope    local    garbage

      static      RAM      program  local    0

      extern      RAM      program  global   0

void abc()
{
   static int i=10;
   printf("\ni=%d",i);
   i++;
}

int IsPrime(int x)
{

    static int i=2;
    if(i<=x/2)
    {
	if(x%i==0)
	return 0;
	else
	{
	 i++;
	 IsPrime(x);
	}
    }
    return 1;

}
*/
void main()
{
  clrscr();
  abc();
  x=20;
  abc();
  getch();
}