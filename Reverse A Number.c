#include <stdio.h>

int reverseNumber(int num)
{
  int res = 0;
  int res1 = 0;
  
  while(num > 0)
  {
  	res1 = num % 10;
  	res =(res*10 )+ res1 ;
  	num /= 10;
  }
  return res;
}

int main()
{
int n;
printf("Enter number to reverse \n");
scanf("%d",&n);
printf("%d",reverseNumber(n));

	return 0;
}
