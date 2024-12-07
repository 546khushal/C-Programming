typedef union XYZ
{
   int x;
   char b;
}XYZ;
typedef enum Boolean
{
  false,true
}Bool;
Bool IsPrime(const int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
	  if(x%i==0)
	  return false;
    }
    return true;
}
void main()
{
    clrscr();
    if(IsPrime(289)==true)
    {
	 printf("\nPrime number");
    }
    else
    {
	 printf("\nComposite number");
    }
    getch();
}
