/*
3. Accept range from user and display perfect numbers from that range.
Input :
Output :
5
6
30
28
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;



BOOL ChkPerfect(int iNo)
{
	BOOL bRet = FALSE;
	int iAns = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(int i = 1;i <= iNo/2 ; i++)
	{
		if(iNo % i == 0)
		{
			iAns += i; 			
		}
	}

	if(iAns == iNo)
	{
		bRet = TRUE;
	}

	return bRet;
}

void RangePerfect(int iStart, int iEnd)
{
	
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
		return ;
	}

	for(int i = iStart; i <= iEnd; i++)
	{
		if(ChkPerfect(i))
		{	
			printf("%d \t",i);
		}	
	}	

}

int main()
{
	int iStart = 0;
	int iEnd = 0;

	printf("Enter the number 1 : \n");
	scanf("%d",&iStart);
	printf("Enter the number 2 : \n");
	scanf("%d",&iEnd);
	
	RangePerfect(iStart,iEnd);
	
	return 0;
}
