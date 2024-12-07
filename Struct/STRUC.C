typedef struct ABC
{
   int a;
   char b;
   double t;
}A;
void main()
{
  A x[]={{12,'a',12.34},{13,'b',15.34},{14,'c',19.34}};//initilization of structure
  A m;
  int i;
  A *p;
  p=x;
  m=x[0];
  clrscr();
  printf("\nm.a = %d , m.b = %c  and m.t = %g",m.a,m.b,m.t);
  for(i=0;i<3;i++)
  {
	//printf("\na = %d , b = %c  and t = %g",x[i].a,x[i].b,x[i].t);
	printf("\na = %d , b = %c  and t = %g",p->a,p->b,p->t);
	p++;
  }
  getch();
}