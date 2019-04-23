/*
2. Accept range from user and return addition of prime numbers in between that
range.
Input :
Output :
10
20

60 (11 + 13 + 17 + 19)

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;



BOOL ChkPrime(int iNo)
{
	BOOL bRet = TRUE;

	for(int i = 2;i <= iNo/2 ; i++)
	{
		if(iNo % i == 0)
		{
			bRet = FALSE;		
			break;			
		}
	}

	return bRet;
}

int RangePrimeSum(int iStart, int iEnd)
{
	int iAns = 0;

	if(iStart < 0)
	{
		iStart = -iStart;
	}

	if(iEnd < 0)
	{
		iEnd = -iEnd;
	}

	if(iStart > iEnd)
	{
		return -1;
	}

	for(int i = iStart; i <= iEnd; i++)
	{
		if(ChkPrime(i))
		{	
			iAns += i;
		}	
	}	

	return iAns;
}

void Display(int iAns)
{
	if(iAns == -1)
	{
		printf("number 1 must be less than number 2\n");
		return;		
	}
	printf("The addition of all prime numbers is %d \n",iAns);
}

int main()
{
	int iStart = 0;
	int iEnd = 0;

	printf("Enter the number 1 : \n");
	scanf("%d",&iStart);
	printf("Enter the number 2 : \n");
	scanf("%d",&iEnd);
	
	int iAns = RangePrimeSum(iStart,iEnd);
	Display(iAns);

	return 0;
}
