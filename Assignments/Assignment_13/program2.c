/*
    Input : 2395
    Output : 3

    Input : 1018
    Output : 2
            
    Input : 922432
    Output : 2     
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   CountOdd
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Count Odd digit
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////


int CountOdd(int iNo)
{
    int iCount = 0;
    int iDigit = 0;


    if (iNo < 0)
    {
        iNo = - iNo;

    }
     while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

   iRet = CountOdd(iValue);

   printf("%d\n",iRet);

    return 0;
}
