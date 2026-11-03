/*
    Input : 23  35
    Output: 35 34 33 32 31 30 29 28 27 26 25 24 23

    Input : 10 10
    Output: 10 10

    Input : -10 2
    Output: 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10  

*/
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//   Function Name  :   RangeDisplayRev
//   Input          :   Integer 
//   output         :   Integer
//   Description    :   Display Reverse range TWO Number 
//   Date           :   3/11/2026
//   Author         :   Nikita Balasaheb Mohite
//
////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int icnt = 0;

    for(icnt = iEnd; icnt >= iStart; icnt--)
    {
        printf("%d\t",icnt);
        
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}
