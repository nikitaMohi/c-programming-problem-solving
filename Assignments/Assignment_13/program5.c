/*
    Input : 2395
    Output : -15   (2-17)

    Input : 1018
    Output : 6     (8-2)
            
    Input : 8440
    Output :16     (16-0)   
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   CountDiff
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Diffrence Between summation of Even and Odd Number
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////


int CountDiff(int iNo)
{
    int iOddSum = 0;
    int iEvenSum = 0;
    int iDigit = 0;


    if (iNo < 0)
    {
        iNo = - iNo;

    }
     while(iNo != 0)
    {
        iDigit = iNo % 10;

         if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }


         iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

   iRet = CountDiff(iValue);

   printf("%d\n",iRet);

    return 0;
}
