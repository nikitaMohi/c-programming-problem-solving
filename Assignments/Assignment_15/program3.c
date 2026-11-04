/*
    Input : 10  10
    Output : Equal     

    Input : 10  12
    Output :Not Equal

    Input : 10  -10
    Output: Not Equal
            
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//   Function Name  :   ChkEqual
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   display Number is Equal or Not
//   Date           :   4/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////////////////////////
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1 , int iNo2)
{
    
   if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    int bRet = FALSE;

    printf("Enter Two Numbers\n");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }

    else
    {
        printf("Not Equal");
    }

    

    return 0;
}
