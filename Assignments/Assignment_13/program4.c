/*
    Input : 2395
    Output : 270

    Input : 1018
    Output : 8
            
    Input : 922432
    Output : 2864    
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   MultDigits
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Multiplication of all digits
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////


int MultDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;


    if (iNo < 0)
    {
        iNo = - iNo;

    }
     while(iNo != 0)
    {
        iDigit = iNo % 10;

         iMult = iMult * iDigit;

         iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

   iRet = MultDigits(iValue);

   printf("%d\n",iRet);

    return 0;
}
