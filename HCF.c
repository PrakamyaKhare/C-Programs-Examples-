#include <stdio.h>

int hcf(int a,int b)
{
  int step = 0;
  char s[] = "The step no:- ";
  if(b != 0)
  {
  	
  	printf("%s  %d = %d , %d",s,step,b,a%b);
  	printf("\n");
  	step++;
  	return hcf(b,a%b);
  }
   else {
   	printf("\nFinal HCF(");
   	printf("%d)",a);
   	return a;
   }
}

void main()
{
	int a,b;
	printf("Enter two integers\n ");
	scanf("%d %d",&a,&b);
	hcf(a,b);
	return;
}
