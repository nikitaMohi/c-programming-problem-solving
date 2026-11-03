/*
    Input : 2395
    Output : 5
            9
            3
            2

    Input : 1018
    Output : 8
            1
            0
            1
            
    Input : -1018
    Output : 8
            1
            0
            1         
    

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   DisplayDigit
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display digit in Reverse Order
//   Date           :   31/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = - iNo;

    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
    
}

int main()
{
    int iValue1 = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    
    DisplayDigit(iValue1);

    return 0;
}