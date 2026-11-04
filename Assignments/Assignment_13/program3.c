/*
    Input : 2395
    Output : 1

    Input : 1018
    Output : 0
            
    Input : 4521
    Output : 2     
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   CountRange
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Count range between 3 and 7
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////


int CountEven(int iNo)
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

         if(iDigit >= 3 && iDigit <= 7)
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

   iRet = CountEven(iValue);

   printf("%d\n",iRet);

    return 0;
}
