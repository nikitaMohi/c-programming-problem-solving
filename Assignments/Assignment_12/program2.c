/*
    Input : 2395
    Output : There is no Zero

    Input : 1018
    Output : It Contains Zero
            
    Input : -1018
    Output : It Contains Zero        
    
*/

#include<stdio.h>


#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   ChkZero
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Check Whether it contains Zero or not
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = - iNo;

    }

      while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }
    

        iNo = iNo / 10;
    }

    return FALSE;

}

int main()
{
    int iValue = 0;
    BOOL bRet =FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

   bRet = ChkZero(iValue);

   if(bRet == TRUE)
   {
    printf("It contains Zero");
   }
   else
   {
    printf("There is no Zero");
   }

    return 0;
}
