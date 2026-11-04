/*
    Input : 101
    Output : Greater     

    Input : 39
    Output :smaller
            
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   ChkGreater
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   display Number is greater or smaller
//   Date           :   4/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    
   if(iNo >= 100)
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }
    
}

int main()
{
    int iValue = 0;
    int bRet = FALSE;
    

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }

    else
    {
        printf("smaller");
    }

    

    return 0;
}
