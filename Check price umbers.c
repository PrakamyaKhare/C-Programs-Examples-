#include <stdio.h>

int checkPrime(int n)
{
	int flag = 1;
	const int ZERO = 0;
	int half = n/2;
  for(int i = 2; i <= half; i++)
  {
  	if(n%i == ZERO)
  	{
  		flag = 0;
  		break;
  	}
  }
	if(flag)
	{
		return 1;
	} else {
		return 0;
	}
}

int main()
{
int n;
printf("Enter number :- ");
scanf("%d",&n);

if(checkPrime(n))
 printf("%d is a prime number \n",n);
else
  printf("%d is not a prime number ",n);
  
 return 0;
}
