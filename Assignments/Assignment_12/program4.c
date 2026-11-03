/*
    Input : 2395
    Output : 1

    Input : 1018
    Output : 0
            
    Input : 922432
    Output : 1       
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   CountFour
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Count Frequency 4 in it
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////


int CountTwo(int iNo)
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

        if(iDigit == 4)
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

   iRet = CountFour(iValue);

   printf("%d\n",iRet);

    return 0;
}
