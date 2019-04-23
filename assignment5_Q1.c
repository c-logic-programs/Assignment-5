/*
1. Accept range from user and return addition of even numbers in between that
range.
Input :
Output :
10
50
17
(10 + 12 + 14 + 16)

*/

#include<stdio.h>

int RangeEvenSum(int iStart, int iEnd)
{
	int iCnt = 0;

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
		if(i % 2 == 0)
		{
			iCnt += i;
		}	
	}	
	return iCnt;
}

void Display(int iAns)
{
	if(iAns == -1)
	{
		printf("number 1 must be less than number 2\n");
		return;		
	}
	printf("The addition of all even numbers is %d \n",iAns);
}

int main()
{
	int iStart = 0;
	int iEnd = 0;

	printf("Enter the number 1 : \n");
	scanf("%d",&iStart);
	printf("Enter the number 2 : \n");
	scanf("%d",&iEnd);
	
	int iAns = RangeEvenSum(iStart,iEnd);
	Display(iAns);

	return 0;
}
